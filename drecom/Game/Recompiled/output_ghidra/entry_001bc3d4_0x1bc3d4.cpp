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

// Function: entry_001bc3d4
// Address: 0x1bc3d4 - 0x1bc47c
void entry_001bc3d4_0x1bc3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc3d4_0x1bc3d4");
#endif

    switch (ctx->pc) {
        case 0x1bc404u: goto label_1bc404;
        default: break;
    }

    ctx->pc = 0x1bc3d4u;

    // 0x1bc3d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc3d8: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1bc3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1bc3dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bc3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bc3e0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1bc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1bc3e4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BC3E4u;
    {
        const bool branch_taken_0x1bc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3e4) {
            ctx->pc = 0x1BC48Cu;
            return;
        }
    }
    ctx->pc = 0x1BC3ECu;
    // 0x1bc3ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc3f0: 0x8c851b68  lw          $a1, 0x1B68($a0)
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
    // 0x1bc3f4: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x1bc3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1bc3f8: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bc3fc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BC3FCu;
    SET_GPR_U32(ctx, 31, 0x1BC404u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC3FCu, 0x1BC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC404u;
label_1bc404:
    // 0x1bc404: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC54Cu;
            return;
        }
    }
    ctx->pc = 0x1BC40Cu;
    // 0x1bc40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc410: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bc414: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bc414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bc418: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bc41c: 0x10600343  beqz        $v1, . + 4 + (0x343 << 2)
    ctx->pc = 0x1BC41Cu;
    {
        const bool branch_taken_0x1bc41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc41c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC424u;
    // 0x1bc424: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc428: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bc428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bc42c: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bc42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
    // 0x1bc430: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1bc430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1bc434: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bc434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bc438: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bc438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bc43c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc440: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bc440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1bc444: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bc444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bc448: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc44c: 0x10c5000b  beq         $a2, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC44Cu;
    {
        const bool branch_taken_0x1bc44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bc44c) {
            ctx->pc = 0x1BC47Cu;
            return;
        }
    }
    ctx->pc = 0x1BC454u;
    // 0x1bc454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc458: 0x10c40008  beq         $a2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC458u;
    {
        const bool branch_taken_0x1bc458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc458) {
            ctx->pc = 0x1BC47Cu;
            return;
        }
    }
    ctx->pc = 0x1BC460u;
    // 0x1bc460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc464: 0x10c30331  beq         $a2, $v1, . + 4 + (0x331 << 2)
    ctx->pc = 0x1BC464u;
    {
        const bool branch_taken_0x1bc464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc464) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC46Cu;
    // 0x1bc46c: 0x10c0032f  beqz        $a2, . + 4 + (0x32F << 2)
    ctx->pc = 0x1BC46Cu;
    {
        const bool branch_taken_0x1bc46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc46c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC474u;
    // 0x1bc474: 0x1000032d  b           . + 4 + (0x32D << 2)
    ctx->pc = 0x1BC474u;
    {
        const bool branch_taken_0x1bc474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc474) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC47Cu;
}
