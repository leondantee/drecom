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

// Function: entry_00299da8
// Address: 0x299da8 - 0x299e98
void entry_00299da8_0x299da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299da8_0x299da8");
#endif

    switch (ctx->pc) {
        case 0x299ddcu: goto label_299ddc;
        case 0x299df8u: goto label_299df8;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e48u: goto label_299e48;
        case 0x299e64u: goto label_299e64;
        case 0x299e78u: goto label_299e78;
        default: break;
    }

    ctx->pc = 0x299da8u;

    // 0x299da8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x299da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299dac: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x299dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x299db0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x299db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299db4: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x299db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x299db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299dbc: 0x0  nop
    ctx->pc = 0x299dbcu;
    // NOP
    // 0x299dc0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x299dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299dc4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x299dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x299dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299dcc: 0x27b60150  addiu       $s6, $sp, 0x150
    ctx->pc = 0x299dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x299dd0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x299dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x299dd4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x299DD4u;
    SET_GPR_U32(ctx, 31, 0x299DDCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x299DDCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299DDCu) { return; }
    ctx->pc = 0x299DDCu;
label_299ddc:
    // 0x299ddc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x299de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299de4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299de8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299dec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x299decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299df0: 0xc040c80  jal         func_103200
    ctx->pc = 0x299DF0u;
    SET_GPR_U32(ctx, 31, 0x299DF8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x299DF8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299DF8u) { return; }
    ctx->pc = 0x299DF8u;
label_299df8:
    // 0x299df8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x299df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x299dfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x299dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299e04: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x299e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x299e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299e0c: 0x0  nop
    ctx->pc = 0x299e0cu;
    // NOP
    // 0x299e10: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x299e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299e14: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x299e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299e18: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e1c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x299e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x299e20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299e20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299e24: 0xc040c8c  jal         func_103230
    ctx->pc = 0x299E24u;
    SET_GPR_U32(ctx, 31, 0x299E2Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x299E2Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E2Cu) { return; }
    ctx->pc = 0x299E2Cu;
label_299e2c:
    // 0x299e2c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e30: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e34: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299e3c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299e40: 0xc040c80  jal         func_103200
    ctx->pc = 0x299E40u;
    SET_GPR_U32(ctx, 31, 0x299E48u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x299E48u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E48u) { return; }
    ctx->pc = 0x299E48u;
label_299e48:
    // 0x299e48: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x299e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x299e4c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e50: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x299e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x299e54: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x299e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e58: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x299e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299E5Cu;
    SET_GPR_U32(ctx, 31, 0x299E64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x299E64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E64u) { return; }
    ctx->pc = 0x299E64u;
label_299e64:
    // 0x299e64: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x299e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e68: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x299e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x299e6c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x299e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299e70: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x299E70u;
    SET_GPR_U32(ctx, 31, 0x299E78u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x299E70u, 0x299E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E78u;
label_299e78:
    // 0x299e78: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x299e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x299e7c: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x299e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299e80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x299e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x299e84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x299e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x299e88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299E88u;
    {
        const bool branch_taken_0x299e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e88) {
            ctx->pc = 0x299E98u;
            return;
        }
    }
    ctx->pc = 0x299E90u;
    // 0x299e90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x299e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x299e94: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x299e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    ctx->pc = 0x299e98u;
}
