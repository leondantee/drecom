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

// Function: Em10_shotgun_fire
// Address: 0x12e900 - 0x12ee8c
void Em10_shotgun_fire_0x12e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_shotgun_fire_0x12e900");
#endif

    switch (ctx->pc) {
        case 0x12e954u: goto label_12e954;
        case 0x12e970u: goto label_12e970;
        case 0x12e988u: goto label_12e988;
        case 0x12e99cu: goto label_12e99c;
        case 0x12e9b4u: goto label_12e9b4;
        case 0x12ea3cu: goto label_12ea3c;
        case 0x12ea60u: goto label_12ea60;
        case 0x12ea98u: goto label_12ea98;
        case 0x12eaa4u: goto label_12eaa4;
        case 0x12ead0u: goto label_12ead0;
        case 0x12eb00u: goto label_12eb00;
        case 0x12eb0cu: goto label_12eb0c;
        case 0x12ec18u: goto label_12ec18;
        case 0x12ec24u: goto label_12ec24;
        case 0x12ee08u: goto label_12ee08;
        case 0x12ee24u: goto label_12ee24;
        case 0x12ee34u: goto label_12ee34;
        default: break;
    }

    ctx->pc = 0x12e900u;

    // 0x12e900: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x12e904: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x12e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x12e908: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12e90c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12e910: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12e914: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e92c: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x12e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x12e930: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e934: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x12e938: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12e93c: 0x24428a80  addiu       $v0, $v0, -0x7580
    ctx->pc = 0x12e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937216));
    // 0x12e940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e944: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x12e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x12e948: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e94c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x12E94Cu;
    SET_GPR_U32(ctx, 31, 0x12E954u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x12E954u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12E954u) { return; }
    ctx->pc = 0x12E954u;
label_12e954:
    // 0x12e954: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x12e958: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12e95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12e95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12e960: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e964: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x12e964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e968: 0xc040ce4  jal         func_103390
    ctx->pc = 0x12E968u;
    SET_GPR_U32(ctx, 31, 0x12E970u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x12E970u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12E970u) { return; }
    ctx->pc = 0x12E970u;
label_12e970:
    // 0x12e970: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12e974: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12e978: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12e97c: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x12e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12e980: 0xc040ca2  jal         func_103288
    ctx->pc = 0x12E980u;
    SET_GPR_U32(ctx, 31, 0x12E988u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x12E988u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12E988u) { return; }
    ctx->pc = 0x12E988u;
label_12e988:
    // 0x12e988: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e98c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x12e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12e990: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x12e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e994: 0xc040c00  jal         func_103000
    ctx->pc = 0x12E994u;
    SET_GPR_U32(ctx, 31, 0x12E99Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x12E99Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12E99Cu) { return; }
    ctx->pc = 0x12E99Cu;
label_12e99c:
    // 0x12e99c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12e9a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12e9a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e9a8: 0x24450570  addiu       $a1, $v0, 0x570
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12e9ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12E9ACu;
    SET_GPR_U32(ctx, 31, 0x12E9B4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12E9B4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12E9B4u) { return; }
    ctx->pc = 0x12E9B4u;
label_12e9b4:
    // 0x12e9b4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x12e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x12e9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e9bc: 0x0  nop
    ctx->pc = 0x12e9bcu;
    // NOP
    // 0x12e9c0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x12e9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x12e9c4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x12e9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e9cc: 0x0  nop
    ctx->pc = 0x12e9ccu;
    // NOP
    // 0x12e9d0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x12e9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x12e9d4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x12e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x12e9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e9dc: 0x0  nop
    ctx->pc = 0x12e9dcu;
    // NOP
    // 0x12e9e0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x12e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x12e9e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12e9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e9ec: 0x0  nop
    ctx->pc = 0x12e9ecu;
    // NOP
    // 0x12e9f0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x12e9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x12e9f4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12e9f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12e9fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12e9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12ea00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12ea04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12ea08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12ea0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12ea10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ea14: 0x34440105  ori         $a0, $v0, 0x105
    ctx->pc = 0x12ea14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x12ea18: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x12ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ea1c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ea20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ea24: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x12ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x12ea28: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x12ea2c: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12ea30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12ea30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ea34: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12EA34u;
    SET_GPR_U32(ctx, 31, 0x12EA3Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12EA34u, 0x12EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA3Cu;
label_12ea3c:
    // 0x12ea3c: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x12ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x12ea40: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x12ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x12ea44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12ea44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12ea48: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x12ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ea4c: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x12ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x12ea50: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12ea54: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12ea58: 0xc06c6e8  jal         func_1B1BA0
    ctx->pc = 0x12EA58u;
    SET_GPR_U32(ctx, 31, 0x12EA60u);
    ctx->pc = 0x1B1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1BA0u, 0x12EA58u, 0x12EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA60u;
label_12ea60:
    // 0x12ea60: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x12ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x12ea64: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x12ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12ea68: 0x106000fb  beqz        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x12EA68u;
    {
        const bool branch_taken_0x12ea68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea68) {
            ctx->pc = 0x12EE58u;
            goto label_12ee58;
        }
    }
    ctx->pc = 0x12EA70u;
    // 0x12ea70: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x12ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12ea74: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12ea78: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EAACu;
            goto label_12eaac;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x12ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x12ea84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ea84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ea88: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x12ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12ea8c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x12ea8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ea90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x12EA90u;
    SET_GPR_U32(ctx, 31, 0x12EA98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x12EA90u, 0x12EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA98u;
label_12ea98:
    // 0x12ea98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12ea98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12ea9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x12EA9Cu;
    SET_GPR_U32(ctx, 31, 0x12EAA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x12EA9Cu, 0x12EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAA4u;
label_12eaa4:
    // 0x12eaa4: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x12EAA4u;
    {
        const bool branch_taken_0x12eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eaa4) {
            ctx->pc = 0x12EE58u;
            goto label_12ee58;
        }
    }
    ctx->pc = 0x12EAACu;
label_12eaac:
    // 0x12eaac: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x12eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12eab0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x12eab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12eab4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EAB4u;
    {
        const bool branch_taken_0x12eab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eab4) {
            ctx->pc = 0x12EAC4u;
            goto label_12eac4;
        }
    }
    ctx->pc = 0x12EABCu;
    // 0x12eabc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12eac0: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x12eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_12eac4:
    // 0x12eac4: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x12eac4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12eac8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x12EAC8u;
    {
        const bool branch_taken_0x12eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eac8) {
            ctx->pc = 0x12EE48u;
            goto label_12ee48;
        }
    }
    ctx->pc = 0x12EAD0u;
label_12ead0:
    // 0x12ead0: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x12ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x12ead4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x12ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x12ead8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x12eadc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12eae0: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12eae4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12eae8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12eaec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12eaf0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12eaf4: 0x24460570  addiu       $a2, $v0, 0x570
    ctx->pc = 0x12eaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12eaf8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12EAF8u;
    SET_GPR_U32(ctx, 31, 0x12EB00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12EAF8u, 0x12EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB00u;
label_12eb00:
    // 0x12eb00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12eb04: 0xc067588  jal         func_19D620
    ctx->pc = 0x12EB04u;
    SET_GPR_U32(ctx, 31, 0x12EB0Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x12EB04u, 0x12EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB0Cu;
label_12eb0c:
    // 0x12eb0c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x12eb10: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x12eb10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12eb14: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x12eb18: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x12eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eb1c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eb20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12eb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12eb24: 0x0  nop
    ctx->pc = 0x12eb24u;
    // NOP
    // 0x12eb28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x12EB28u;
    {
        const bool branch_taken_0x12eb28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eb28) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB30u;
    // 0x12eb30: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x12eb34: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x12eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eb38: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eb3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12eb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12eb40: 0x0  nop
    ctx->pc = 0x12eb40u;
    // NOP
    // 0x12eb44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x12EB44u;
    {
        const bool branch_taken_0x12eb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eb44) {
            ctx->pc = 0x12EB58u;
            goto label_12eb58;
        }
    }
    ctx->pc = 0x12EB4Cu;
    // 0x12eb4c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eb50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB50u;
    {
        const bool branch_taken_0x12eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb50) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB58u;
label_12eb58:
    // 0x12eb58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12eb58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb5c: 0x0  nop
    ctx->pc = 0x12eb5cu;
    // NOP
label_12eb60:
    // 0x12eb60: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12eb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12eb64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eb68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x12eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x12eb6c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12EB6Cu;
    {
        const bool branch_taken_0x12eb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb6c) {
            ctx->pc = 0x12EC2Cu;
            goto label_12ec2c;
        }
    }
    ctx->pc = 0x12EB74u;
    // 0x12eb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb78: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12EB78u;
    {
        const bool branch_taken_0x12eb78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x12eb78) {
            ctx->pc = 0x12EBACu;
            goto label_12ebac;
        }
    }
    ctx->pc = 0x12EB80u;
    // 0x12eb80: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB80u;
    {
        const bool branch_taken_0x12eb80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb80) {
            ctx->pc = 0x12EB90u;
            goto label_12eb90;
        }
    }
    ctx->pc = 0x12EB88u;
    // 0x12eb88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EBC8u;
            goto label_12ebc8;
        }
    }
    ctx->pc = 0x12EB90u;
label_12eb90:
    // 0x12eb90: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12eb94: 0x84228db0  lh          $v0, -0x7250($at)
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB0u));
    // 0x12eb98: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12eb98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12eb9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eba0: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12eba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12eba4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12EBA4u;
    {
        const bool branch_taken_0x12eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eba4) {
            ctx->pc = 0x12EBE0u;
            goto label_12ebe0;
        }
    }
    ctx->pc = 0x12EBACu;
label_12ebac:
    // 0x12ebac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ebb0: 0x84228db2  lh          $v0, -0x724E($at)
    ctx->pc = 0x12ebb0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB2u));
    // 0x12ebb4: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12ebb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebbc: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ebbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12EBC0u;
    {
        const bool branch_taken_0x12ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebc0) {
            ctx->pc = 0x12EBE0u;
            goto label_12ebe0;
        }
    }
    ctx->pc = 0x12EBC8u;
label_12ebc8:
    // 0x12ebc8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ebcc: 0x84228db4  lh          $v0, -0x724C($at)
    ctx->pc = 0x12ebccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB4u));
    // 0x12ebd0: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12ebd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebd8: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ebd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebdc: 0x0  nop
    ctx->pc = 0x12ebdcu;
    // NOP
label_12ebe0:
    // 0x12ebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebe4: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x12ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ebe8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12ebec: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x12ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ebf0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ebf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ebf8: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x12ebf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebfc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ec00: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x12ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x12ec04: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x12ec04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ec08: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x12ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12ec0c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12ec10: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12EC10u;
    SET_GPR_U32(ctx, 31, 0x12EC18u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12EC18u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12EC18u) { return; }
    ctx->pc = 0x12EC18u;
label_12ec18:
    // 0x12ec18: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x12ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ec1c: 0xc0480e8  jal         func_1203A0
    ctx->pc = 0x12EC1Cu;
    SET_GPR_U32(ctx, 31, 0x12EC24u);
    ctx->pc = 0x1203A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203A0u, 0x12EC1Cu, 0x12EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC24u;
label_12ec24:
    // 0x12ec24: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12EC24u;
    {
        const bool branch_taken_0x12ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec24) {
            ctx->pc = 0x12EE08u;
            goto label_12ee08;
        }
    }
    ctx->pc = 0x12EC2Cu;
label_12ec2c:
    // 0x12ec2c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12ec2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12ec30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec34: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12ec38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EC38u;
    {
        const bool branch_taken_0x12ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec38) {
            ctx->pc = 0x12EC5Cu;
            goto label_12ec5c;
        }
    }
    ctx->pc = 0x12EC40u;
    // 0x12ec40: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x12ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x12ec44: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ec44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ec48: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ec48u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ec4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec50: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ec50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec54: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x12EC54u;
    {
        const bool branch_taken_0x12ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec54) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12EC5Cu;
label_12ec5c:
    // 0x12ec5c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12ec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12ec60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ec68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12ec6c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x12ec70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ec74: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ec78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec7c: 0x1282001d  beq         $s4, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12ECF4u;
            goto label_12ecf4;
        }
    }
    ctx->pc = 0x12EC84u;
    // 0x12ec84: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC84u;
    {
        const bool branch_taken_0x12ec84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec84) {
            ctx->pc = 0x12EC94u;
            goto label_12ec94;
        }
    }
    ctx->pc = 0x12EC8Cu;
    // 0x12ec8c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x12EC8Cu;
    {
        const bool branch_taken_0x12ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec8c) {
            ctx->pc = 0x12ED60u;
            goto label_12ed60;
        }
    }
    ctx->pc = 0x12EC94u;
label_12ec94:
    // 0x12ec94: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ec98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ec9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eca0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12eca4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12eca8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12eca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ecac: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ecacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ecb0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ecb0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ecb4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecbc: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ecbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ecc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ecc4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ecc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eccc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ecccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ecd0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecd8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12ecd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12ecdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ece0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ece4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ece8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12ece8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ecec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12ECECu;
    {
        const bool branch_taken_0x12ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecec) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12ECF4u;
label_12ecf4:
    // 0x12ecf4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed00: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x12ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x12ed04: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12ed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12ed08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ed0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ed10: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed14: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ed14u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ed18: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed20: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ed20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ed24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed28: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12ed2c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed34: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ed34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed38: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed40: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12ed40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12ed44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed48: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12ed4c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed54: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12ed54u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12ED58u;
    {
        const bool branch_taken_0x12ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed58) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12ED60u;
label_12ed60:
    // 0x12ed60: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed6c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x12ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x12ed70: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12ed74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ed78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ed7c: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ed7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed80: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ed80u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ed84: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed8c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ed90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed94: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x12ed94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12ed98: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eda0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eda4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12eda8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12edac: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12edacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12edb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12edb4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x12edb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12edb8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12edbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12edc0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12edc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12edc4: 0x0  nop
    ctx->pc = 0x12edc4u;
    // NOP
label_12edc8:
    // 0x12edc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12edcc: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x12edccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x12edd0: 0xa21611ef  sb          $s6, 0x11EF($s0)
    ctx->pc = 0x12edd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 22));
    // 0x12edd4: 0xa61511f2  sh          $s5, 0x11F2($s0)
    ctx->pc = 0x12edd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 21));
    // 0x12edd8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12eddc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ede0: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x12ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ede4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ede8: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ede8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12edec: 0xa21711f0  sb          $s7, 0x11F0($s0)
    ctx->pc = 0x12edecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 23));
    // 0x12edf0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12edf4: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x12edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x12edf8: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x12edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12edfc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12ee00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12EE00u;
    SET_GPR_U32(ctx, 31, 0x12EE08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12EE08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12EE08u) { return; }
    ctx->pc = 0x12EE08u;
label_12ee08:
    // 0x12ee08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ee0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ee10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12ee14: 0x24450570  addiu       $a1, $v0, 0x570
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12ee18: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x12ee18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12ee1c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12EE1Cu;
    SET_GPR_U32(ctx, 31, 0x12EE24u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12EE1Cu, 0x12EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE24u;
label_12ee24:
    // 0x12ee24: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x12ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ee28: 0xc7ad0138  lwc1        $f13, 0x138($sp)
    ctx->pc = 0x12ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12ee2c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x12EE2Cu;
    SET_GPR_U32(ctx, 31, 0x12EE34u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x12EE2Cu, 0x12EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE34u;
label_12ee34:
    // 0x12ee34: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x12ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x12ee38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee3c: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x12ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x12ee40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ee44: 0x0  nop
    ctx->pc = 0x12ee44u;
    // NOP
label_12ee48:
    // 0x12ee48: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12ee4c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12ee50: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x12EE50u;
    {
        const bool branch_taken_0x12ee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee50) {
            ctx->pc = 0x12EAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ead0;
        }
    }
    ctx->pc = 0x12EE58u;
label_12ee58:
    // 0x12ee58: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x12ee58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ee5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12ee5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ee60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12ee60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12ee64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12ee64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ee68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ee68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ee6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ee6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ee70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ee70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ee74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ee74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ee78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ee7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ee80: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x12ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x12ee84: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EE8Cu;
}
