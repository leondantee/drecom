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

// Function: caseD_0
// Address: 0x208b04 - 0x208c88
void caseD_0_0x208b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x208b04");
#endif

    switch (ctx->pc) {
        case 0x208b38u: goto label_208b38;
        case 0x208b94u: goto label_208b94;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bf8u: goto label_208bf8;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c68u: goto label_208c68;
        case 0x208c78u: goto label_208c78;
        default: break;
    }

    ctx->pc = 0x208b04u;

    // 0x208b04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208b08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208b0c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x208b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x208b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x208b14: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x208b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x208b18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208b1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208b20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x208b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x208b24: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x208b28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x208b30: 0xc0965d0  jal         func_259740
    ctx->pc = 0x208B30u;
    SET_GPR_U32(ctx, 31, 0x208B38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x208B30u, 0x208B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B38u;
label_208b38:
    // 0x208b38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x208b3c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x208b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x208b40: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x208b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x208b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b48: 0x0  nop
    ctx->pc = 0x208b48u;
    // NOP
    // 0x208b4c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x208b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b54: 0x0  nop
    ctx->pc = 0x208b54u;
    // NOP
    // 0x208b58: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x208b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b60: 0x0  nop
    ctx->pc = 0x208b60u;
    // NOP
    // 0x208b64: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x208b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b6c: 0x0  nop
    ctx->pc = 0x208b6cu;
    // NOP
    // 0x208b70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x208b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x208b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b78: 0x0  nop
    ctx->pc = 0x208b78u;
    // NOP
    // 0x208b7c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x208b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x208b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b84: 0x0  nop
    ctx->pc = 0x208b84u;
    // NOP
    // 0x208b88: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x208b8c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x208B8Cu;
    SET_GPR_U32(ctx, 31, 0x208B94u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x208B8Cu, 0x208B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B94u;
label_208b94:
    // 0x208b94: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x208b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x208b98: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x208b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x208b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208ba0: 0x0  nop
    ctx->pc = 0x208ba0u;
    // NOP
    // 0x208ba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x208ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x208ba8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208bac: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x208bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619480u, _value); } while (0); }
    // 0x208bb0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x208bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x208bb4: 0x24a49440  addiu       $a0, $a1, -0x6BC0
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
    // 0x208bb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208bbc: 0xc42c9480  lwc1        $f12, -0x6B80($at)
    ctx->pc = 0x208bbcu;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208bc0: 0xc067844  jal         func_19E110
    ctx->pc = 0x208BC0u;
    SET_GPR_U32(ctx, 31, 0x208BC8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x208BC0u, 0x208BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BC8u;
label_208bc8:
    // 0x208bc8: 0x3c03c64b  lui         $v1, 0xC64B
    ctx->pc = 0x208bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50763 << 16));
    // 0x208bcc: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x208bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x208bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208bd4: 0x0  nop
    ctx->pc = 0x208bd4u;
    // NOP
    // 0x208bd8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x208bdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x208be0: 0x24649430  addiu       $a0, $v1, -0x6BD0
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939696));
    // 0x208be4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x208be8: 0x24659440  addiu       $a1, $v1, -0x6BC0
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x208bec: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x208bf0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x208BF0u;
    SET_GPR_U32(ctx, 31, 0x208BF8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x208BF8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208BF8u) { return; }
    ctx->pc = 0x208BF8u;
label_208bf8:
    // 0x208bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x208bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x208bfc: 0x3c04464b  lui         $a0, 0x464B
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17995 << 16));
    // 0x208c00: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x208c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c08: 0x0  nop
    ctx->pc = 0x208c08u;
    // NOP
    // 0x208c0c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x208c10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x208c14: 0x24649420  addiu       $a0, $v1, -0x6BE0
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939680));
    // 0x208c18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x208c1c: 0x24659440  addiu       $a1, $v1, -0x6BC0
    ctx->pc = 0x208c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x208c20: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x208c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x208c24: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x208C24u;
    SET_GPR_U32(ctx, 31, 0x208C2Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x208C2Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208C2Cu) { return; }
    ctx->pc = 0x208C2Cu;
label_208c2c:
    // 0x208c2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208c30: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x208c34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208c34u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x619420u));
    // 0x208c38: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x208c3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x208c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208c44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x208c48: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x208c4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x208c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208c50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208c54: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x208c58: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x208c5c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x208c60: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x208C60u;
    SET_GPR_U32(ctx, 31, 0x208C68u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208C60u, 0x208C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C68u;
label_208c68:
    // 0x208c68: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x208c6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x208c70: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x208C70u;
    SET_GPR_U32(ctx, 31, 0x208C78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208C70u, 0x208C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C78u;
label_208c78:
    // 0x208c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208c7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x208c80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208c84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x208c88u;
}
