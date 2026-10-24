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

// Function: entry_0016f3c0
// Address: 0x16f3c0 - 0x16f460
void entry_0016f3c0_0x16f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3c0_0x16f3c0");
#endif

    ctx->pc = 0x16f3c0u;

    // 0x16f3c0: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x16f3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f3c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3c8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16f3c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f3cc: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16F3CCu;
    {
        const bool branch_taken_0x16f3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3cc) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F3D4u;
    // 0x16f3d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f3dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f3e0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16F3E0u;
    {
        const bool branch_taken_0x16f3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f3e0) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F3E8u;
    // 0x16f3e8: 0x92110012  lbu         $s1, 0x12($s0)
    ctx->pc = 0x16f3e8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3ec: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x16f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x16f3f0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x16f3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16f3f4: 0x1052001a  beq         $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F3F4u;
    {
        const bool branch_taken_0x16f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x16f3f4) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F3FCu;
    // 0x16f3fc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f400: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f404: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16f408: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F408u;
    {
        const bool branch_taken_0x16f408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f408) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F410u;
    // 0x16f410: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f418: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x16f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x16f41c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F41Cu;
    {
        const bool branch_taken_0x16f41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f41c) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F424u;
    // 0x16f424: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f42c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16f430: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16F430u;
    {
        const bool branch_taken_0x16f430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f430) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F438u;
    // 0x16f438: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f43c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f440: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x16f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16f444: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F460u;
            return;
        }
    }
    ctx->pc = 0x16F44Cu;
    // 0x16f44c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f454: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16f458: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F458u;
    {
        const bool branch_taken_0x16f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f458) {
            ctx->pc = 0x16F478u;
            return;
        }
    }
    ctx->pc = 0x16F460u;
}
