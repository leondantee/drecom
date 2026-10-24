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

// Function: entry_002e53f4
// Address: 0x2e53f4 - 0x2e5490
void entry_002e53f4_0x2e53f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e53f4_0x2e53f4");
#endif

    switch (ctx->pc) {
        case 0x2e5414u: goto label_2e5414;
        case 0x2e5424u: goto label_2e5424;
        default: break;
    }

    ctx->pc = 0x2e53f4u;

    // 0x2e53f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5400: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x2e5400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x2e5404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e540c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E540Cu;
    SET_GPR_U32(ctx, 31, 0x2E5414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E540Cu, 0x2E5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5414u;
label_2e5414:
    // 0x2e5414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5418: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2e5418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e541c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E541Cu;
    SET_GPR_U32(ctx, 31, 0x2E5424u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E541Cu, 0x2E5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5424u;
label_2e5424:
    // 0x2e5424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5428: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x2e5428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2e542c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2e542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e5430: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e5430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e5434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e5434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e5438: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e543c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2e543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2e5440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5444: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e5448: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e544c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e544cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e5450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5454: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e5458: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e545c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e5460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e5464: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e546c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5470: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e5470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e5474: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e5478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e547c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e547cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e5480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5484: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e548c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e548cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e5490u;
}
