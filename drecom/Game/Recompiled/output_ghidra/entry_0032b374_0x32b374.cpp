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

// Function: entry_0032b374
// Address: 0x32b374 - 0x32b3ec
void entry_0032b374_0x32b374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b374_0x32b374");
#endif

    ctx->pc = 0x32b374u;

    // 0x32b374: 0x920328c0  lbu         $v1, 0x28C0($s0)
    ctx->pc = 0x32b374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10432)));
    // 0x32b378: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32b378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b380: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x32B380u;
    {
        const bool branch_taken_0x32b380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b380) {
            ctx->pc = 0x32B414u;
            return;
        }
    }
    ctx->pc = 0x32B388u;
    // 0x32b388: 0x920328b9  lbu         $v1, 0x28B9($s0)
    ctx->pc = 0x32b388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10425)));
    // 0x32b38c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b390: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32B390u;
    {
        const bool branch_taken_0x32b390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b390) {
            ctx->pc = 0x32B3ECu;
            return;
        }
    }
    ctx->pc = 0x32B398u;
    // 0x32b398: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b39c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32b3a0: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b3a4: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3a8: 0x461001a  bgez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32B3A8u;
    {
        const bool branch_taken_0x32b3a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x32b3a8) {
            ctx->pc = 0x32B414u;
            return;
        }
    }
    ctx->pc = 0x32B3B0u;
    // 0x32b3b0: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x32b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b3b4: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32b3b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b3bc: 0x8c230110  lw          $v1, 0x110($at)
    ctx->pc = 0x32b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32b3c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b3c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32B3C4u;
    {
        const bool branch_taken_0x32b3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b3c4) {
            ctx->pc = 0x32B414u;
            return;
        }
    }
    ctx->pc = 0x32B3CCu;
    // 0x32b3cc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b3d0: 0x8c24af70  lw          $a0, -0x5090($at)
    ctx->pc = 0x32b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32b3d4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32b3d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32b3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32b3dc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b3e0: 0xac23af70  sw          $v1, -0x5090($at)
    ctx->pc = 0x32b3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF70u, _value); } while (0);
    // 0x32b3e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32B3E4u;
    {
        const bool branch_taken_0x32b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b3e4) {
            ctx->pc = 0x32B414u;
            return;
        }
    }
    ctx->pc = 0x32B3ECu;
}
