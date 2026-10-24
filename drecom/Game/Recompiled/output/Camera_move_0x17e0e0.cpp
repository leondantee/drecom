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

// Function: Camera_move
// Address: 0x17e0e0 - 0x17e214
void Camera_move_0x17e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_move_0x17e0e0");
#endif

    switch (ctx->pc) {
        case 0x17e0e0u: goto label_17e0e0;
        case 0x17e0e4u: goto label_17e0e4;
        case 0x17e0e8u: goto label_17e0e8;
        case 0x17e0ecu: goto label_17e0ec;
        case 0x17e0f0u: goto label_17e0f0;
        case 0x17e0f4u: goto label_17e0f4;
        case 0x17e0f8u: goto label_17e0f8;
        case 0x17e0fcu: goto label_17e0fc;
        case 0x17e100u: goto label_17e100;
        case 0x17e104u: goto label_17e104;
        case 0x17e108u: goto label_17e108;
        case 0x17e10cu: goto label_17e10c;
        case 0x17e110u: goto label_17e110;
        case 0x17e114u: goto label_17e114;
        case 0x17e118u: goto label_17e118;
        case 0x17e11cu: goto label_17e11c;
        case 0x17e120u: goto label_17e120;
        case 0x17e124u: goto label_17e124;
        case 0x17e128u: goto label_17e128;
        case 0x17e12cu: goto label_17e12c;
        case 0x17e130u: goto label_17e130;
        case 0x17e134u: goto label_17e134;
        case 0x17e138u: goto label_17e138;
        case 0x17e13cu: goto label_17e13c;
        case 0x17e140u: goto label_17e140;
        case 0x17e144u: goto label_17e144;
        case 0x17e148u: goto label_17e148;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e150u: goto label_17e150;
        case 0x17e154u: goto label_17e154;
        case 0x17e158u: goto label_17e158;
        case 0x17e15cu: goto label_17e15c;
        case 0x17e160u: goto label_17e160;
        case 0x17e164u: goto label_17e164;
        case 0x17e168u: goto label_17e168;
        case 0x17e16cu: goto label_17e16c;
        case 0x17e170u: goto label_17e170;
        case 0x17e174u: goto label_17e174;
        case 0x17e178u: goto label_17e178;
        case 0x17e17cu: goto label_17e17c;
        case 0x17e180u: goto label_17e180;
        case 0x17e184u: goto label_17e184;
        case 0x17e188u: goto label_17e188;
        case 0x17e18cu: goto label_17e18c;
        case 0x17e190u: goto label_17e190;
        case 0x17e194u: goto label_17e194;
        case 0x17e198u: goto label_17e198;
        case 0x17e19cu: goto label_17e19c;
        case 0x17e1a0u: goto label_17e1a0;
        case 0x17e1a4u: goto label_17e1a4;
        case 0x17e1a8u: goto label_17e1a8;
        case 0x17e1acu: goto label_17e1ac;
        case 0x17e1b0u: goto label_17e1b0;
        case 0x17e1b4u: goto label_17e1b4;
        case 0x17e1b8u: goto label_17e1b8;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e1c0u: goto label_17e1c0;
        case 0x17e1c4u: goto label_17e1c4;
        case 0x17e1c8u: goto label_17e1c8;
        case 0x17e1ccu: goto label_17e1cc;
        case 0x17e1d0u: goto label_17e1d0;
        case 0x17e1d4u: goto label_17e1d4;
        case 0x17e1d8u: goto label_17e1d8;
        case 0x17e1dcu: goto label_17e1dc;
        case 0x17e1e0u: goto label_17e1e0;
        case 0x17e1e4u: goto label_17e1e4;
        case 0x17e1e8u: goto label_17e1e8;
        case 0x17e1ecu: goto label_17e1ec;
        case 0x17e1f0u: goto label_17e1f0;
        case 0x17e1f4u: goto label_17e1f4;
        case 0x17e1f8u: goto label_17e1f8;
        case 0x17e1fcu: goto label_17e1fc;
        case 0x17e200u: goto label_17e200;
        case 0x17e204u: goto label_17e204;
        case 0x17e208u: goto label_17e208;
        case 0x17e20cu: goto label_17e20c;
        case 0x17e210u: goto label_17e210;
        default: break;
    }

    ctx->pc = 0x17e0e0u;

label_17e0e0:
    // 0x17e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17e0e4:
    // 0x17e0e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_17e0e8:
    // 0x17e0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e0ec:
    // 0x17e0ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x17e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_17e0f0:
    // 0x17e0f0: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x17e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
label_17e0f4:
    // 0x17e0f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x17e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_17e0f8:
    // 0x17e0f8: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_17e0fc:
    // 0x17e0fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e0fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17e100:
    // 0x17e100: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x17e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_17e104:
    // 0x17e104: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e104u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_17e108:
    // 0x17e108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e10c:
    // 0x17e10c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_17e110:
    // 0x17e110: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_17e114:
    // 0x17e114: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17e118:
    // 0x17e118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_17e11c:
    // 0x17e11c: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x17e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
label_17e120:
    // 0x17e120: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e120u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_17e124:
    // 0x17e124: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e128:
    // 0x17e128: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_17e12c:
    // 0x17e12c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x17e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_17e130:
    // 0x17e130: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17e134:
    // 0x17e134: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_17e138:
    // 0x17e138: 0x2442f110  addiu       $v0, $v0, -0xEF0
    ctx->pc = 0x17e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
label_17e13c:
    // 0x17e13c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_17e140:
    // 0x17e140: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e144:
    // 0x17e144: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_17e148:
    // 0x17e148: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e14c:
    // 0x17e14c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_17e150:
    // 0x17e150: 0xe420f120  swc1        $f0, -0xEE0($at)
    ctx->pc = 0x17e150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963488), bits); }
label_17e154:
    // 0x17e154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e158:
    // 0x17e158: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_17e15c:
    // 0x17e15c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x17e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_17e160:
    // 0x17e160: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_17e164:
    // 0x17e164: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17e168:
    // 0x17e168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e16c:
    // 0x17e16c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x17e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_17e170:
    // 0x17e170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e174:
    // 0x17e174: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x17e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_17e178:
    // 0x17e178: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_17e17c:
    // 0x17e17c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17e180:
    if (ctx->pc == 0x17E180u) {
        ctx->pc = 0x17E184u;
        goto label_17e184;
    }
    ctx->pc = 0x17E17Cu;
    {
        const bool branch_taken_0x17e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e17c) {
            ctx->pc = 0x17E19Cu;
            goto label_17e19c;
        }
    }
    ctx->pc = 0x17E184u;
label_17e184:
    // 0x17e184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e188:
    // 0x17e188: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_17e18c:
    // 0x17e18c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x17e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_17e190:
    // 0x17e190: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17e194:
    // 0x17e194: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e198:
    // 0x17e198: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x17e198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_17e19c:
    // 0x17e19c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e1a0:
    // 0x17e1a0: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_17e1a4:
    // 0x17e1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e1a8:
    // 0x17e1a8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_17e1ac:
    if (ctx->pc == 0x17E1ACu) {
        ctx->pc = 0x17E1B0u;
        goto label_17e1b0;
    }
    ctx->pc = 0x17E1A8u;
    {
        const bool branch_taken_0x17e1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e1a8) {
            ctx->pc = 0x17E1D4u;
            goto label_17e1d4;
        }
    }
    ctx->pc = 0x17E1B0u;
label_17e1b0:
    // 0x17e1b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_17e1b4:
    // 0x17e1b4: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x17e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_17e1b8:
    // 0x17e1b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_17e1bc:
    // 0x17e1bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_17e1c0:
    if (ctx->pc == 0x17E1C0u) {
        ctx->pc = 0x17E1C4u;
        goto label_17e1c4;
    }
    ctx->pc = 0x17E1BCu;
    {
        const bool branch_taken_0x17e1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e1bc) {
            ctx->pc = 0x17E1D4u;
            goto label_17e1d4;
        }
    }
    ctx->pc = 0x17E1C4u;
label_17e1c4:
    // 0x17e1c4: 0xc058ca0  jal         func_163280
label_17e1c8:
    if (ctx->pc == 0x17E1C8u) {
        ctx->pc = 0x17E1CCu;
        goto label_17e1cc;
    }
    ctx->pc = 0x17E1C4u;
    SET_GPR_U32(ctx, 31, 0x17E1CCu);
    ctx->pc = 0x163280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163280u, 0x17E1C4u, 0x17E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1CCu;
label_17e1cc:
    // 0x17e1cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_17e1d0:
    if (ctx->pc == 0x17E1D0u) {
        ctx->pc = 0x17E1D4u;
        goto label_17e1d4;
    }
    ctx->pc = 0x17E1CCu;
    {
        const bool branch_taken_0x17e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e1cc) {
            ctx->pc = 0x17E1F8u;
            goto label_17e1f8;
        }
    }
    ctx->pc = 0x17E1D4u;
label_17e1d4:
    // 0x17e1d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17e1d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_17e1d8:
    // 0x17e1d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17e1dc:
    // 0x17e1dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17e1e0:
    // 0x17e1e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_17e1e4:
    // 0x17e1e4: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
label_17e1e8:
    // 0x17e1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17e1ec:
    // 0x17e1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e1f0:
    // 0x17e1f0: 0x40f809  jalr        $v0
label_17e1f4:
    if (ctx->pc == 0x17E1F4u) {
        ctx->pc = 0x17E1F8u;
        goto label_17e1f8;
    }
    ctx->pc = 0x17E1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E1F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1F0u, 0x17E1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E1F8u;
label_17e1f8:
    // 0x17e1f8: 0xc0623e0  jal         func_188F80
label_17e1fc:
    if (ctx->pc == 0x17E1FCu) {
        ctx->pc = 0x17E200u;
        goto label_17e200;
    }
    ctx->pc = 0x17E1F8u;
    SET_GPR_U32(ctx, 31, 0x17E200u);
    ctx->pc = 0x188F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F80u, 0x17E1F8u, 0x17E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E200u;
label_17e200:
    // 0x17e200: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17e200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e204:
    // 0x17e204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e208:
    // 0x17e208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17e20c:
    // 0x17e20c: 0x3e00008  jr          $ra
label_17e210:
    if (ctx->pc == 0x17E210u) {
        ctx->pc = 0x17E214u;
        goto label_fallthrough_0x17e20c;
    }
    ctx->pc = 0x17E20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e20c:
    ctx->pc = 0x17E214u;
}
