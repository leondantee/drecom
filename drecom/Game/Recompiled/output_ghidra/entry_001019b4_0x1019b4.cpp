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

// Function: entry_001019b4
// Address: 0x1019b4 - 0x101a5c
void entry_001019b4_0x1019b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001019b4_0x1019b4");
#endif

    ctx->pc = 0x1019b4u;

    // 0x1019b4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1019b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1019b8: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1019bc: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1019c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1019c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1019c4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1019c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1019c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1019cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1019ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1019d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1019d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1019d4: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1019d8: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x1019d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1019dc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1019dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1019e0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1019e4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1019e8: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x1019ec: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x1019ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1019f0: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x1019f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1019f4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1019f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1019f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1019f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1019fc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1019fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x101a00: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101a04: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x101a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x101a08: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x101a0c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x101a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x101a10: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x101a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x101a14: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x101a18: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x101a1c: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x101a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x101a20: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x101a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x101a24: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x101a24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x101a28: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x101a28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x101a2c: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x101a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x101a30: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x101a30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x101a34: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x101a34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x101a38: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x101a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x101a3c: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x101a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x101a40: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x101a40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x101a44: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x101a44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x101a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101A48u;
    {
        const bool branch_taken_0x101a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A48u;
        // 0x101a4c: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a48) {
            ctx->pc = 0x101A5Cu;
            return;
        }
    }
    ctx->pc = 0x101A50u;
    // 0x101a50: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x101a50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x101a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x101A54u;
    {
        const bool branch_taken_0x101a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A54u;
        // 0x101a58: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a54) {
            ctx->pc = 0x101A68u;
            return;
        }
    }
    ctx->pc = 0x101A5Cu;
}
