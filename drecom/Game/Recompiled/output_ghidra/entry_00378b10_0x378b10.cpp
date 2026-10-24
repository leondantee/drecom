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

// Function: entry_00378b10
// Address: 0x378b10 - 0x378d00
void entry_00378b10_0x378b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378b10_0x378b10");
#endif

    switch (ctx->pc) {
        case 0x378b60u: goto label_378b60;
        case 0x378b6cu: goto label_378b6c;
        case 0x378b7cu: goto label_378b7c;
        case 0x378b94u: goto label_378b94;
        case 0x378bb0u: goto label_378bb0;
        case 0x378bc4u: goto label_378bc4;
        case 0x378bd0u: goto label_378bd0;
        case 0x378becu: goto label_378bec;
        case 0x378c00u: goto label_378c00;
        case 0x378c14u: goto label_378c14;
        case 0x378c28u: goto label_378c28;
        case 0x378c40u: goto label_378c40;
        case 0x378c4cu: goto label_378c4c;
        case 0x378c7cu: goto label_378c7c;
        case 0x378cb0u: goto label_378cb0;
        default: break;
    }

    ctx->pc = 0x378b10u;

    // 0x378b10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x378b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x378b14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x378b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x378b18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x378b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x378b1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x378b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x378b20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x378b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x378b24: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x378b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x378b28: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378b2c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x378b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x378b30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x378b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x378b34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x378b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x378b38: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x378b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x378b3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x378b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x378b40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x378b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x378b44: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x378b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x378b48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x378b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x378b4c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x378b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x378b50: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x378b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x378b54: 0x27a7012c  addiu       $a3, $sp, 0x12C
    ctx->pc = 0x378b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x378b58: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x378B58u;
    SET_GPR_U32(ctx, 31, 0x378B60u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x378B58u, 0x378B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B60u;
label_378b60:
    // 0x378b60: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x378b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x378b64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x378B64u;
    SET_GPR_U32(ctx, 31, 0x378B6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x378B64u, 0x378B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B6Cu;
label_378b6c:
    // 0x378b6c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x378b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x378b70: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x378b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x378b74: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x378B74u;
    SET_GPR_U32(ctx, 31, 0x378B7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x378B74u, 0x378B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B7Cu;
label_378b7c:
    // 0x378b7c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x378b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x378b80: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x378b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378b84: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x378b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x378b88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x378b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x378b8c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378B8Cu;
    SET_GPR_U32(ctx, 31, 0x378B94u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378B8Cu, 0x378B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B94u;
label_378b94:
    // 0x378b94: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x378b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378b98: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x378b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x378b9c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x378b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378ba0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x378ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x378ba4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x378ba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x378ba8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x378BA8u;
    SET_GPR_U32(ctx, 31, 0x378BB0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x378BB0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378BB0u) { return; }
    ctx->pc = 0x378BB0u;
label_378bb0:
    // 0x378bb0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x378bb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x378bb4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x378bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x378bb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x378bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x378bbc: 0xc040d62  jal         func_103588
    ctx->pc = 0x378BBCu;
    SET_GPR_U32(ctx, 31, 0x378BC4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x378BC4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378BC4u) { return; }
    ctx->pc = 0x378BC4u;
label_378bc4:
    // 0x378bc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x378bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x378bc8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378BC8u;
    SET_GPR_U32(ctx, 31, 0x378BD0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378BC8u, 0x378BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378BD0u;
label_378bd0:
    // 0x378bd0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x378bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x378bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378bd8: 0x0  nop
    ctx->pc = 0x378bd8u;
    // NOP
    // 0x378bdc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x378bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x378be0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x378be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x378be4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x378BE4u;
    SET_GPR_U32(ctx, 31, 0x378BECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x378BECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378BECu) { return; }
    ctx->pc = 0x378BECu;
label_378bec:
    // 0x378bec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x378becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x378bf0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x378bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x378bf4: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x378bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x378bf8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x378BF8u;
    SET_GPR_U32(ctx, 31, 0x378C00u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x378C00u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378C00u) { return; }
    ctx->pc = 0x378C00u;
label_378c00:
    // 0x378c00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x378c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x378c04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x378c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x378c08: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x378c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x378c0c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x378C0Cu;
    SET_GPR_U32(ctx, 31, 0x378C14u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x378C14u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378C14u) { return; }
    ctx->pc = 0x378C14u;
label_378c14:
    // 0x378c14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x378c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x378c18: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x378c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x378c1c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x378c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x378c20: 0xc040c00  jal         func_103000
    ctx->pc = 0x378C20u;
    SET_GPR_U32(ctx, 31, 0x378C28u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x378C28u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378C28u) { return; }
    ctx->pc = 0x378C28u;
label_378c28:
    // 0x378c28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x378c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378c2c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x378c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x378c30: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x378c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x378c34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x378c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x378c38: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x378C38u;
    SET_GPR_U32(ctx, 31, 0x378C40u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x378C40u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378C40u) { return; }
    ctx->pc = 0x378C40u;
label_378c40:
    // 0x378c40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x378c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378c44: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x378C44u;
    SET_GPR_U32(ctx, 31, 0x378C4Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x378C44u, 0x378C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C4Cu;
label_378c4c:
    // 0x378c4c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x378c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378c50: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x378c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x378c54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x378c54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378c58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x378c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x378c5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x378c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x378c60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x378c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x378c64: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x378c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x378c68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x378c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x378c6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x378c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x378c70: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x378c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x378c74: 0xc040c80  jal         func_103200
    ctx->pc = 0x378C74u;
    SET_GPR_U32(ctx, 31, 0x378C7Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x378C7Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x378C7Cu) { return; }
    ctx->pc = 0x378C7Cu;
label_378c7c:
    // 0x378c7c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x378c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378c80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x378c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378c84: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x378c84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378c88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x378c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378c8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x378c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378c90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378c94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x378c94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x378c98: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x378c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378c9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x378c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378ca0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378ca4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x378ca4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x378ca8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x378CA8u;
    SET_GPR_U32(ctx, 31, 0x378CB0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x378CA8u, 0x378CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CB0u;
label_378cb0:
    // 0x378cb0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x378cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x378cb4: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x378cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378cb8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x378cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x378cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378cc0: 0x0  nop
    ctx->pc = 0x378cc0u;
    // NOP
    // 0x378cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x378cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378cc8: 0x0  nop
    ctx->pc = 0x378cc8u;
    // NOP
    // 0x378ccc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x378CCCu;
    {
        const bool branch_taken_0x378ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378ccc) {
            ctx->pc = 0x378D00u;
            return;
        }
    }
    ctx->pc = 0x378CD4u;
    // 0x378cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x378cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378cd8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378cdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x378cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x378ce0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378ce4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x378ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x378ce8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378cec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x378cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x378cf0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378cf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x378cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x378cf8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378cfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x378cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x378d00u;
}
