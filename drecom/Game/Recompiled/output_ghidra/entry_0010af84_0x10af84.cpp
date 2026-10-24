#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010af84
// Address: 0x10af84 - 0x10affc
void entry_0010af84_0x10af84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af84_0x10af84");
#endif

    ctx->pc = 0x10af84u;

    // 0x10af84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10af84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10af88: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x10af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x10af8c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x10af8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af90: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x10af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x10af94: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10af98: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10af9c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10afa0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10afa4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10afa8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10afac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10afb0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10afb4: 0x8c4c44b0  lw          $t4, 0x44B0($v0)
    ctx->pc = 0x10afb4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x3844B0u));
    // 0x10afb8: 0x15800010  bnez        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x10AFB8u;
    {
        const bool branch_taken_0x10afb8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFB8u;
        // 0x10afbc: 0x8d7e0040  lw          $fp, 0x40($t3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afb8) {
            ctx->pc = 0x10AFFCu;
            return;
        }
    }
    ctx->pc = 0x10AFC0u;
    // 0x10afc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10afc4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10afc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10afc8: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x10afc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x10afcc: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x10afd0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x10afd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10afd8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10afdc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10afe0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10afe4: 0xace43dac  sw          $a0, 0x3DAC($a3)
    ctx->pc = 0x10afe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x383DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383DACu, _value); } while (0);
    // 0x10afe8: 0xaca23db4  sw          $v0, 0x3DB4($a1)
    ctx->pc = 0x10afe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383DB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383DB4u, _value); } while (0);
    // 0x10afec: 0xacc33d6c  sw          $v1, 0x3D6C($a2)
    ctx->pc = 0x10afecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383D6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D6Cu, _value); } while (0);
    // 0x10aff0: 0xad023d48  sw          $v0, 0x3D48($t0)
    ctx->pc = 0x10aff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D48u, _value); } while (0);
    // 0x10aff4: 0xad223d4c  sw          $v0, 0x3D4C($t1)
    ctx->pc = 0x10aff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D4Cu, _value); } while (0);
    // 0x10aff8: 0xad423dc8  sw          $v0, 0x3DC8($t2)
    ctx->pc = 0x10aff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383DC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383DC8u, _value); } while (0);
    ctx->pc = 0x10affcu;
}
