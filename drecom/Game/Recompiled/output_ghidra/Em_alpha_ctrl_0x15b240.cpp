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

// Function: Em_alpha_ctrl
// Address: 0x15b240 - 0x15b3c0
void Em_alpha_ctrl_0x15b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_alpha_ctrl_0x15b240");
#endif

    switch (ctx->pc) {
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b318u: goto label_15b318;
        case 0x15b338u: goto label_15b338;
        case 0x15b390u: goto label_15b390;
        case 0x15b3b0u: goto label_15b3b0;
        default: break;
    }

    ctx->pc = 0x15b240u;

    // 0x15b240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b244: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15b248: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x15b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x15b24c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b250: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b254: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b25c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B288u;
            goto label_15b288;
        }
    }
    ctx->pc = 0x15B264u;
    // 0x15b264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b268: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b26c: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x15b270: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B270u;
    {
        const bool branch_taken_0x15b270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b270) {
            ctx->pc = 0x15B288u;
            goto label_15b288;
        }
    }
    ctx->pc = 0x15B278u;
    // 0x15b278: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b27c: 0xa04011ed  sb          $zero, 0x11ED($v0)
    ctx->pc = 0x15b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4589), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B280u;
    {
        const bool branch_taken_0x15b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b280) {
            ctx->pc = 0x15B294u;
            goto label_15b294;
        }
    }
    ctx->pc = 0x15B288u;
label_15b288:
    // 0x15b288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b28c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b290: 0xa04311ed  sb          $v1, 0x11ED($v0)
    ctx->pc = 0x15b290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4589), (uint8_t)GPR_U32(ctx, 3));
label_15b294:
    // 0x15b294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b298: 0x904211ed  lbu         $v0, 0x11ED($v0)
    ctx->pc = 0x15b298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4589)));
    // 0x15b29c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15B29Cu;
    {
        const bool branch_taken_0x15b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b29c) {
            ctx->pc = 0x15B340u;
            goto label_15b340;
        }
    }
    ctx->pc = 0x15B2A4u;
    // 0x15b2a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2a8: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x15b2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b2ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15b2b0: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x15b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2b8: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x15b2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x15b2bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b2c0: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x15b2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x15b2c4: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x15B2C4u;
    {
        const bool branch_taken_0x15b2c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b2c4) {
            ctx->pc = 0x15B2FCu;
            goto label_15b2fc;
        }
    }
    ctx->pc = 0x15B2CCu;
    // 0x15b2cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x15b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2d4: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x15b2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x15b2d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b2e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b2e4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b2e8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15b2ec: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B2ECu;
    SET_GPR_U32(ctx, 31, 0x15B2F4u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B2ECu, 0x15B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2F4u;
label_15b2f4:
    // 0x15b2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B2F4u;
    {
        const bool branch_taken_0x15b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2f4) {
            ctx->pc = 0x15B318u;
            goto label_15b318;
        }
    }
    ctx->pc = 0x15B2FCu;
label_15b2fc:
    // 0x15b2fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b304: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b308: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b30c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15b310: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B310u;
    SET_GPR_U32(ctx, 31, 0x15B318u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B310u, 0x15B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B318u;
label_15b318:
    // 0x15b318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b31c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b320: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b324: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b328: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b32c: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x15b32cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b330: 0xc096234  jal         func_2588D0
    ctx->pc = 0x15B330u;
    SET_GPR_U32(ctx, 31, 0x15B338u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x15B330u, 0x15B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B338u;
label_15b338:
    // 0x15b338: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15B338u;
    {
        const bool branch_taken_0x15b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b338) {
            ctx->pc = 0x15B3B0u;
            goto label_15b3b0;
        }
    }
    ctx->pc = 0x15B340u;
label_15b340:
    // 0x15b340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b344: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x15b344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b348: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x15b34c: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x15b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b354: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x15b354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x15b358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b35c: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x15b35cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x15b360: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B360u;
    {
        const bool branch_taken_0x15b360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b360) {
            ctx->pc = 0x15B374u;
            goto label_15b374;
        }
    }
    ctx->pc = 0x15B368u;
    // 0x15b368: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x15b36c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b370: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x15b370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
label_15b374:
    // 0x15b374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b378: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b37c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b380: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b384: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15b388: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B388u;
    SET_GPR_U32(ctx, 31, 0x15B390u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B388u, 0x15B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B390u;
label_15b390:
    // 0x15b390: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b394: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b39c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b3a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b3a4: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x15b3a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b3a8: 0xc096234  jal         func_2588D0
    ctx->pc = 0x15B3A8u;
    SET_GPR_U32(ctx, 31, 0x15B3B0u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x15B3A8u, 0x15B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3B0u;
label_15b3b0:
    // 0x15b3b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15b3b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b3b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15b3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B3C0u;
}
