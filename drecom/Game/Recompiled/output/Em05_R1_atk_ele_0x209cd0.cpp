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

// Function: Em05_R1_atk_ele
// Address: 0x209cd0 - 0x20adb0
void Em05_R1_atk_ele_0x209cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_ele_0x209cd0");
#endif

    switch (ctx->pc) {
        case 0x209d90u: goto label_209d90;
        case 0x209e10u: goto label_209e10;
        case 0x209e6cu: goto label_209e6c;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eecu: goto label_209eec;
        case 0x209f88u: goto label_209f88;
        case 0x209fb8u: goto label_209fb8;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a064u: goto label_20a064;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a098u: goto label_20a098;
        case 0x20a118u: goto label_20a118;
        case 0x20a188u: goto label_20a188;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1d4u: goto label_20a1d4;
        case 0x20a234u: goto label_20a234;
        case 0x20a254u: goto label_20a254;
        case 0x20a358u: goto label_20a358;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a670u: goto label_20a670;
        case 0x20a680u: goto label_20a680;
        case 0x20a6e0u: goto label_20a6e0;
        case 0x20a750u: goto label_20a750;
        case 0x20a76cu: goto label_20a76c;
        case 0x20a800u: goto label_20a800;
        case 0x20a868u: goto label_20a868;
        case 0x20a890u: goto label_20a890;
        case 0x20a98cu: goto label_20a98c;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac54u: goto label_20ac54;
        default: break;
    }

    ctx->pc = 0x209cd0u;

    // 0x209cd0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x209cd4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x209cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x209cd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x209cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x209cdc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x209cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x209ce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x209ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x209ce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x209ce8: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x209ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
    // 0x209cec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x209cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x209cf0: 0x2482a170  addiu       $v0, $a0, -0x5E90
    ctx->pc = 0x209cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943088));
    // 0x209cf4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x209cf8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x209cf8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A170u));
    // 0x209cfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x209cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x209d00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x209d04: 0x2444a180  addiu       $a0, $v0, -0x5E80
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943104));
    // 0x209d08: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x209d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x209d0c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x209d0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A180u));
    // 0x209d10: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x209d10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x209d14: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x209d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x209d18: 0x2483a190  addiu       $v1, $a0, -0x5E70
    ctx->pc = 0x209d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943120));
    // 0x209d1c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x209d20: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x209d20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A190u));
    // 0x209d24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x209d24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x209d28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x209d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x209d2c: 0x2442a1a0  addiu       $v0, $v0, -0x5E60
    ctx->pc = 0x209d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943136));
    // 0x209d30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x209d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x209d34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x209d34u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1A0u));
    // 0x209d38: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x209d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x209d3c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d40: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x209d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x209d44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x209d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d4c: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x209D4Cu;
    {
        const bool branch_taken_0x209d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209d4c) {
            ctx->pc = 0x209EF0u;
            goto label_209ef0;
        }
    }
    ctx->pc = 0x209D54u;
    // 0x209d54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209D54u;
    {
        const bool branch_taken_0x209d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209d54) {
            ctx->pc = 0x209D64u;
            goto label_209d64;
        }
    }
    ctx->pc = 0x209D5Cu;
    // 0x209d5c: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x209D5Cu;
    {
        const bool branch_taken_0x209d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209d5c) {
            ctx->pc = 0x20ABFCu;
            goto label_20abfc;
        }
    }
    ctx->pc = 0x209D64u;
label_209d64:
    // 0x209d64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209d68: 0xac2094b0  sw          $zero, -0x6B50($at)
    ctx->pc = 0x209d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6194B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B0u, _value); } while (0);
    // 0x209d6c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d70: 0x8fab0218  lw          $t3, 0x218($sp)
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d74: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x209d74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x209d78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x209d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x209d7c: 0x24063c11  addiu       $a2, $zero, 0x3C11
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15377));
    // 0x209d80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x209d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x209d88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x209D88u;
    SET_GPR_U32(ctx, 31, 0x209D90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x209D88u, 0x209D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x8fa90218  lw          $t1, 0x218($sp)
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d94: 0xa5201278  sh          $zero, 0x1278($t1)
    ctx->pc = 0x209d94u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x209d98: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x209d98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209d9c: 0xa540127a  sh          $zero, 0x127A($t2)
    ctx->pc = 0x209d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x209da0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209da4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x209da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x209da8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dac: 0xac601344  sw          $zero, 0x1344($v1)
    ctx->pc = 0x209dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4932), GPR_U32(ctx, 0));
    // 0x209db0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209db4: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x209db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x209db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209dc0: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x209dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x209dc4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x209dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x209dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209dd0: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x209dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
    // 0x209dd4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dd8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x209ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209de0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x209de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x209de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209de8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209dec: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x209decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x209df0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209df4: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x209df4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x209df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209dfc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x209dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e00: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x209e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x209e04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x209e04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x209e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209E08u;
    {
        const bool branch_taken_0x209e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e08) {
            ctx->pc = 0x209E28u;
            goto label_209e28;
        }
    }
    ctx->pc = 0x209E10u;
label_209e10:
    // 0x209e10: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x209e14: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x209e18: 0x24a693e0  addiu       $a2, $a1, -0x6C20
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939616));
    // 0x209e1c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x209e20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209e24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_209e28:
    // 0x209e28: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x209e2c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x209E2Cu;
    {
        const bool branch_taken_0x209e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e2c) {
            ctx->pc = 0x209E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209e10;
        }
    }
    ctx->pc = 0x209E34u;
    // 0x209e34: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e38: 0xac601368  sw          $zero, 0x1368($v1)
    ctx->pc = 0x209e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4968), GPR_U32(ctx, 0));
    // 0x209e3c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e40: 0xac801374  sw          $zero, 0x1374($a0)
    ctx->pc = 0x209e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4980), GPR_U32(ctx, 0));
    // 0x209e44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209e48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e4c: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x209e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619388u, _value); } while (0); }
    // 0x209e50: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x209e54: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x209e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x209e58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209e5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e60: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x209e64: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x209E64u;
    SET_GPR_U32(ctx, 31, 0x209E6Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x209E64u, 0x209E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E6Cu;
label_209e6c:
    // 0x209e6c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209e6cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209e70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209e74: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x209e74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x209e78: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x209e7c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x209e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x209e80: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x209e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x209e84: 0x24030505  addiu       $v1, $zero, 0x505
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x209e88: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x209e88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x209e8c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209e90: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x209e94: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x209e98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x209e98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209e9c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x209e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ea0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x209ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x209ea4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x209ea8: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x209eac: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x209eb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209eb4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209eb8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ebc: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x209ec0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x209EC0u;
    SET_GPR_U32(ctx, 31, 0x209EC8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x209EC8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x209EC8u) { return; }
    ctx->pc = 0x209EC8u;
label_209ec8:
    // 0x209ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209ecc: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x209ed0: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x209ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x209ed4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x209ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209ed8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x209ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x209edc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x209ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x209ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x209ee4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x209EE4u;
    SET_GPR_U32(ctx, 31, 0x209EECu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x209EE4u, 0x209EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EECu;
label_209eec:
    // 0x209eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x209eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_209ef0:
    // 0x209ef0: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209ef4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x209ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209efc: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x209efcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x209f00: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f04: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x209f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x209f08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x209f0c: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x209f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x209f10: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x209F10u;
    {
        const bool branch_taken_0x209f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f10) {
            ctx->pc = 0x20A118u;
            goto label_20a118;
        }
    }
    ctx->pc = 0x209F18u;
    // 0x209f18: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x209f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f1c: 0x8cc51344  lw          $a1, 0x1344($a2)
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4932)));
    // 0x209f20: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x209f24: 0xacc31344  sw          $v1, 0x1344($a2)
    ctx->pc = 0x209f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4932), GPR_U32(ctx, 3));
    // 0x209f28: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f2c: 0x8cc31348  lw          $v1, 0x1348($a2)
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4936)));
    // 0x209f30: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x209f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209f34: 0xacc41348  sw          $a0, 0x1348($a2)
    ctx->pc = 0x209f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4936), GPR_U32(ctx, 4));
    // 0x209f38: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f3c: 0x8c651344  lw          $a1, 0x1344($v1)
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x209f40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209f44: 0x14a30074  bne         $a1, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x209F44u;
    {
        const bool branch_taken_0x209f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x209f44) {
            ctx->pc = 0x20A118u;
            goto label_20a118;
        }
    }
    ctx->pc = 0x209F4Cu;
    // 0x209f4c: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x209f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f50: 0xaca01344  sw          $zero, 0x1344($a1)
    ctx->pc = 0x209f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4932), GPR_U32(ctx, 0));
    // 0x209f54: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f58: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x209f5c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x209f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209f60: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x209f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x209f64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x209f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x209f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209f6c: 0x0  nop
    ctx->pc = 0x209f6cu;
    // NOP
    // 0x209f70: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x209f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x209f74: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f78: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x209f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209f7c: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x209f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x209f80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x209F80u;
    SET_GPR_U32(ctx, 31, 0x209F88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x209F80u, 0x209F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F88u;
label_209f88:
    // 0x209f88: 0x3c033e86  lui         $v1, 0x3E86
    ctx->pc = 0x209f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16006 << 16));
    // 0x209f8c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x209f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x209f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x209f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209f94: 0x0  nop
    ctx->pc = 0x209f94u;
    // NOP
    // 0x209f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x209f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209f9c: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x209f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209fa4: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x209fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x209fa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x209fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x209fac: 0xc7ac0204  lwc1        $f12, 0x204($sp)
    ctx->pc = 0x209facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209fb0: 0xc067844  jal         func_19E110
    ctx->pc = 0x209FB0u;
    SET_GPR_U32(ctx, 31, 0x209FB8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209FB0u, 0x209FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x209fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209fbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209fc0: 0x0  nop
    ctx->pc = 0x209fc0u;
    // NOP
    // 0x209fc4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x209fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x209fc8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x209fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x209fcc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x209fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x209fd0: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209fd4: 0x8ca41348  lw          $a0, 0x1348($a1)
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4936)));
    // 0x209fd8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209FD8u;
    {
        const bool branch_taken_0x209fd8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x209fd8) {
            ctx->pc = 0x209FF4u;
            goto label_209ff4;
        }
    }
    ctx->pc = 0x209FE0u;
    // 0x209fe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x209fe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209fe4: 0x0  nop
    ctx->pc = 0x209fe4u;
    // NOP
    // 0x209fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x209fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x209fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x209FECu;
    {
        const bool branch_taken_0x209fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209fec) {
            ctx->pc = 0x20A010u;
            goto label_20a010;
        }
    }
    ctx->pc = 0x209FF4u;
label_209ff4:
    // 0x209ff4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x209ff8: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x209ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x209ffc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x209ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20a000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a004: 0x0  nop
    ctx->pc = 0x20a004u;
    // NOP
    // 0x20a008: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20a008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20a00c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20a00cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20a010:
    // 0x20a010: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x20a014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a018: 0x0  nop
    ctx->pc = 0x20a018u;
    // NOP
    // 0x20a01c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20a01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a020: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x20a020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x20a024: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x20a024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x20a028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a02c: 0x0  nop
    ctx->pc = 0x20a02cu;
    // NOP
    // 0x20a030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a034: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x20a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x20a038: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a03c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20a040: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a044: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A044u;
    SET_GPR_U32(ctx, 31, 0x20A04Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A04Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A04Cu) { return; }
    ctx->pc = 0x20A04Cu;
label_20a04c:
    // 0x20a04c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a050: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x20a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a054: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20a054u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20a058: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a05c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20A05Cu;
    SET_GPR_U32(ctx, 31, 0x20A064u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20A064u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A064u) { return; }
    ctx->pc = 0x20A064u;
label_20a064:
    // 0x20a064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a068: 0x0  nop
    ctx->pc = 0x20a068u;
    // NOP
    // 0x20a06c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20a070: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a074: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20a074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a07c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a080: 0x244700d0  addiu       $a3, $v0, 0xD0
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x20a084: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x20A084u;
    SET_GPR_U32(ctx, 31, 0x20A08Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x20A084u, 0x20A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A08Cu;
label_20a08c:
    // 0x20a08c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x20a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20a090: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x20A090u;
    SET_GPR_U32(ctx, 31, 0x20A098u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x20A098u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A098u) { return; }
    ctx->pc = 0x20A098u;
label_20a098:
    // 0x20a098: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20a09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0a0: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x20a0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x20a0a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a0a8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20a0a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a0ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a0b0: 0x244692f0  addiu       $a2, $v0, -0x6D10
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x20a0b4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x20a0b4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x20a0b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0bc: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x20a0bcu;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20a0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a0c8: 0x0  nop
    ctx->pc = 0x20a0c8u;
    // NOP
    // 0x20a0cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20a0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a0d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0d4: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20a0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x20a0d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x20a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a0e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0e4: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x20a0e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0ec: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x20a0ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20a0f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0f4: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x20a0f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x20a0f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0fc: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x20a0fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20a100: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a104: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a108: 0x244992e0  addiu       $t1, $v0, -0x6D20
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x20a10c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x20a10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20a110: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x20A110u;
    SET_GPR_U32(ctx, 31, 0x20A118u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x20A110u, 0x20A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A118u;
label_20a118:
    // 0x20a118: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a11c: 0x8542127a  lh          $v0, 0x127A($t2)
    ctx->pc = 0x20a11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4730)));
    // 0x20a120: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x20A120u;
    {
        const bool branch_taken_0x20a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a120) {
            ctx->pc = 0x20A474u;
            goto label_20a474;
        }
    }
    ctx->pc = 0x20A128u;
    // 0x20a128: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a12c: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a12cu;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a130: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x20a130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x20a134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a138: 0x0  nop
    ctx->pc = 0x20a138u;
    // NOP
    // 0x20a13c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20a13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a140: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a144: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x20a148: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a14c: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a14cu;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a154: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20a158: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20a15c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a160: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a164: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x20a168: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20a16c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20a16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a170: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x20a174: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a178: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20a17c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20a180: 0xc05c848  jal         func_172120
    ctx->pc = 0x20A180u;
    SET_GPR_U32(ctx, 31, 0x20A188u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20A180u, 0x20A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A188u;
label_20a188:
    // 0x20a188: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a18c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a190: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20a190u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a194: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20A194u;
    SET_GPR_U32(ctx, 31, 0x20A19Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20A194u, 0x20A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A19Cu;
label_20a19c:
    // 0x20a19c: 0x8fb10218  lw          $s1, 0x218($sp)
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1a0: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x20a1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x20a1a4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1a8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20a1ac: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20a1acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a1b0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a1b4: 0x24a692c0  addiu       $a2, $a1, -0x6D40
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x20a1b8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x20a1b8u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x20a1bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a1c4: 0x24649280  addiu       $a0, $v1, -0x6D80
    ctx->pc = 0x20a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
    // 0x20a1c8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x20a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a1cc: 0xc067844  jal         func_19E110
    ctx->pc = 0x20A1CCu;
    SET_GPR_U32(ctx, 31, 0x20A1D4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20A1CCu, 0x20A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1D4u;
label_20a1d4:
    // 0x20a1d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a1d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a1dc: 0xe42094ac  swc1        $f0, -0x6B54($at)
    ctx->pc = 0x20a1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194ACu, _value); } while (0); }
    // 0x20a1e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a1e4: 0xe42094a0  swc1        $f0, -0x6B60($at)
    ctx->pc = 0x20a1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A0u, _value); } while (0); }
    // 0x20a1e8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a1ec: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x20a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a1f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a1f4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x20a1f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a1f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a1fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a200: 0xe42094a4  swc1        $f0, -0x6B5C($at)
    ctx->pc = 0x20a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A4u, _value); } while (0); }
    // 0x20a204: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a208: 0xc4c0128c  lwc1        $f0, 0x128C($a2)
    ctx->pc = 0x20a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a20c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a210: 0xe42094a8  swc1        $f0, -0x6B58($at)
    ctx->pc = 0x20a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194A8u, _value); } while (0); }
    // 0x20a214: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a218: 0x244494a0  addiu       $a0, $v0, -0x6B60
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a21c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x20a220: 0x26059280  addiu       $a1, $s0, -0x6D80
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939264));
    // 0x20a224: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a228: 0x244694a0  addiu       $a2, $v0, -0x6B60
    ctx->pc = 0x20a228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a22c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A22Cu;
    SET_GPR_U32(ctx, 31, 0x20A234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A234u) { return; }
    ctx->pc = 0x20A234u;
label_20a234:
    // 0x20a234: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a238: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20a23c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a240: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20a244: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a248: 0x244694a0  addiu       $a2, $v0, -0x6B60
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x20a24c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20A24Cu;
    SET_GPR_U32(ctx, 31, 0x20A254u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20A254u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A254u) { return; }
    ctx->pc = 0x20A254u;
label_20a254:
    // 0x20a254: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a258: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x20a258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20a25c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a264: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x20a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20a268: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x20A268u;
    {
        const bool branch_taken_0x20a268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a268) {
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A270u;
    // 0x20a270: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a274: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x20a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x20a278: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20a27c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20a27cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1B0u));
    // 0x20a280: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a284: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a288: 0x2444a1c0  addiu       $a0, $v0, -0x5E40
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x20a28c: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20a290: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20a290u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1C0u));
    // 0x20a294: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a298: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a29c: 0x2453a1d0  addiu       $s3, $v0, -0x5E30
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x20a2a0: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20a2a4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x20a2a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1D0u));
    // 0x20a2a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a2ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x20a2b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20a2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a2b4: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x20a2b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20a2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a2bc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20a2c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a2c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20a2c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a2cc: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20a2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a2d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x20a2d8: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x20a2dc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x20a2dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a2e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a2e4: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x20a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x20a2e8: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x20a2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x20a2ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a2f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20a2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a2f8: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x20a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20a2fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20a304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x20a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20a314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x20a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x20a318: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20a31c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x20a320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20a324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a32c: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x20a32cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a330: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a338: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20a33c: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x20a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a344: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20a344u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a348: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x20a348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20a34c: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x20a34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20a350: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20A350u;
    SET_GPR_U32(ctx, 31, 0x20A358u);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20A350u, 0x20A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A358u;
label_20a358:
    // 0x20a358: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a35c: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x20a35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20a360: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x20a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a368: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x20a368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20a36c: 0x14200154  bnez        $at, . + 4 + (0x154 << 2)
    ctx->pc = 0x20A36Cu;
    {
        const bool branch_taken_0x20a36c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a36c) {
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A374u;
    // 0x20a374: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a378: 0x2444a1e0  addiu       $a0, $v0, -0x5E20
    ctx->pc = 0x20a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
    // 0x20a37c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x20a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20a380: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20a380u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A1E0u));
    // 0x20a384: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x20a384u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x20a388: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a38c: 0x2444a1f0  addiu       $a0, $v0, -0x5E10
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x20a390: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20a394: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20a394u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A1F0u));
    // 0x20a398: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x20a398u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x20a39c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20a3a0: 0x2482a200  addiu       $v0, $a0, -0x5E00
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943232));
    // 0x20a3a4: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20a3a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20a3a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A200u));
    // 0x20a3ac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20a3b0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x20a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x20a3b4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20a3b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20a3b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20a3bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a3c0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20a3c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a3c8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20a3cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a3d0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x20a3d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20a3d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a3dc: 0x3c0443af  lui         $a0, 0x43AF
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17327 << 16));
    // 0x20a3e0: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x20a3e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a3e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a3e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20a3ec: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x20a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20a3f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a3f4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a3f8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a3fc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20a400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a404: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20a404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20a408: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a40c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a414: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x20a414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20a418: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x20a41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a420: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20a420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20a424: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20a424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20a428: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a42c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a430: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x20a430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a434: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a438: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20a438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20a43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a440: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20a440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20a444: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20a448: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20a448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20a44c: 0x8fa80218  lw          $t0, 0x218($sp)
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a450: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x20a450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20a454: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a458: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20a458u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a45c: 0x27a901a0  addiu       $t1, $sp, 0x1A0
    ctx->pc = 0x20a45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20a460: 0x27aa01b0  addiu       $t2, $sp, 0x1B0
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20a464: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20A464u;
    SET_GPR_U32(ctx, 31, 0x20A46Cu);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20A464u, 0x20A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A46Cu;
label_20a46c:
    // 0x20a46c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x20A46Cu;
    {
        const bool branch_taken_0x20a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a46c) {
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A474u;
label_20a474:
    // 0x20a474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a478: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a478u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a47c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x20a480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a484: 0x0  nop
    ctx->pc = 0x20a484u;
    // NOP
    // 0x20a488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a48c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a490: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x20a494: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a498: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a498u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4a0: 0x0  nop
    ctx->pc = 0x20a4a0u;
    // NOP
    // 0x20a4a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a4a8: 0x0  nop
    ctx->pc = 0x20a4a8u;
    // NOP
    // 0x20a4ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20A4ACu;
    {
        const bool branch_taken_0x20a4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a4ac) {
            ctx->pc = 0x20A4C0u;
            goto label_20a4c0;
        }
    }
    ctx->pc = 0x20A4B4u;
    // 0x20a4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4bc: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
label_20a4c0:
    // 0x20a4c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4c4: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a4c4u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4cc: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20a4d0: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20a4d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4d8: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a4d8u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4e0: 0x0  nop
    ctx->pc = 0x20a4e0u;
    // NOP
    // 0x20a4e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20a4e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a4e8: 0x0  nop
    ctx->pc = 0x20a4e8u;
    // NOP
    // 0x20a4ec: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x20A4ECu;
    {
        const bool branch_taken_0x20a4ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a4ec) {
            ctx->pc = 0x20A514u;
            goto label_20a514;
        }
    }
    ctx->pc = 0x20A4F4u;
    // 0x20a4f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4f8: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a4f8u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a4fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x20a500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a504: 0x0  nop
    ctx->pc = 0x20a504u;
    // NOP
    // 0x20a508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a50c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a510: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x20a510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
label_20a514:
    // 0x20a514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a518: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a518u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a51c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x20a520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a524: 0x0  nop
    ctx->pc = 0x20a524u;
    // NOP
    // 0x20a528: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a52c: 0x0  nop
    ctx->pc = 0x20a52cu;
    // NOP
    // 0x20a530: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20A530u;
    {
        const bool branch_taken_0x20a530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a530) {
            ctx->pc = 0x20A548u;
            goto label_20a548;
        }
    }
    ctx->pc = 0x20A538u;
    // 0x20a538: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a540: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a544: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x20a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
label_20a548:
    // 0x20a548: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a54c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a550: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20a554: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20a558: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x20a558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x20a55c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a560: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a564: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x20a568: 0x24a6fff6  addiu       $a2, $a1, -0xA
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x20a56c: 0xac8600f4  sw          $a2, 0xF4($a0)
    ctx->pc = 0x20a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 6));
    // 0x20a570: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a574: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a578: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x20a57c: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x20a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20a580: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x20a580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x20a584: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a588: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20a58c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20a590: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a594: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A594u;
    {
        const bool branch_taken_0x20a594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a594) {
            ctx->pc = 0x20A5ACu;
            goto label_20a5ac;
        }
    }
    ctx->pc = 0x20A59Cu;
    // 0x20a59c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5a0: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5a4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5a8: 0xaca400f0  sw          $a0, 0xF0($a1)
    ctx->pc = 0x20a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 4));
label_20a5ac:
    // 0x20a5ac: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5b4: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x20a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x20a5b8: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a5bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A5BCu;
    {
        const bool branch_taken_0x20a5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5bc) {
            ctx->pc = 0x20A5D4u;
            goto label_20a5d4;
        }
    }
    ctx->pc = 0x20A5C4u;
    // 0x20a5c4: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5c8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5cc: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5d0: 0xacb200f4  sw          $s2, 0xF4($a1)
    ctx->pc = 0x20a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 18));
label_20a5d4:
    // 0x20a5d4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5d8: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5dc: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x20a5e0: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a5e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A5E4u;
    {
        const bool branch_taken_0x20a5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5e4) {
            ctx->pc = 0x20A5FCu;
            goto label_20a5fc;
        }
    }
    ctx->pc = 0x20A5ECu;
    // 0x20a5ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5f0: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5f4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5f8: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x20a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
label_20a5fc:
    // 0x20a5fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a600: 0x8c2593e0  lw          $a1, -0x6C20($at)
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6193E0u));
    // 0x20a604: 0x14a0002d  bnez        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x20A604u;
    {
        const bool branch_taken_0x20a604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a604) {
            ctx->pc = 0x20A6BCu;
            goto label_20a6bc;
        }
    }
    ctx->pc = 0x20A60Cu;
    // 0x20a60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a610: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a614: 0xac2693e0  sw          $a2, -0x6C20($at)
    ctx->pc = 0x20a614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6193E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E0u, _value); } while (0);
    // 0x20a618: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a61c: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x20a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20a620: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20a620u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x6192C0u));
    // 0x20a624: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a628: 0x24a39390  addiu       $v1, $a1, -0x6C70
    ctx->pc = 0x20a628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939536));
    // 0x20a62c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20a62cu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20a630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a634: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a638: 0xac2493e4  sw          $a0, -0x6C1C($at)
    ctx->pc = 0x20a638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20a63c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20a640: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x20a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x20a644: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20a644u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x20a648: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a64c: 0x246393a0  addiu       $v1, $v1, -0x6C60
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939552));
    // 0x20a650: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20a650u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6193A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6193A0u, _value); } while (0);
    // 0x20a654: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20a658: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x20a65c: 0x24c593a0  addiu       $a1, $a2, -0x6C60
    ctx->pc = 0x20a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939552));
    // 0x20a660: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a664: 0x24669390  addiu       $a2, $v1, -0x6C70
    ctx->pc = 0x20a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a668: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20A668u;
    SET_GPR_U32(ctx, 31, 0x20A670u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20A668u, 0x20A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A670u;
label_20a670:
    // 0x20a670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20a670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a674: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20a678: 0xc067588  jal         func_19D620
    ctx->pc = 0x20A678u;
    SET_GPR_U32(ctx, 31, 0x20A680u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20A678u, 0x20A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A680u;
label_20a680:
    // 0x20a680: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a684: 0xe4209404  swc1        $f0, -0x6BFC($at)
    ctx->pc = 0x20a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619404u, _value); } while (0); }
    // 0x20a688: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a68c: 0xc4219404  lwc1        $f1, -0x6BFC($at)
    ctx->pc = 0x20a68cu;
    { uint32_t bits = FAST_READ32(0x619404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a690: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x20a694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a698: 0x0  nop
    ctx->pc = 0x20a698u;
    // NOP
    // 0x20a69c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20a69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a6a0: 0x0  nop
    ctx->pc = 0x20a6a0u;
    // NOP
    // 0x20a6a4: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x20A6A4u;
    {
        const bool branch_taken_0x20a6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a6a4) {
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A6ACu;
    // 0x20a6ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a6b0: 0xac2093e4  sw          $zero, -0x6C1C($at)
    ctx->pc = 0x20a6b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20a6b4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x20A6B4u;
    {
        const bool branch_taken_0x20a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6b4) {
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A6BCu;
label_20a6bc:
    // 0x20a6bc: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a6c0: 0x24a392c0  addiu       $v1, $a1, -0x6D40
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x20a6c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20a6c4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6192C0u));
    // 0x20a6c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a6cc: 0x24649390  addiu       $a0, $v1, -0x6C70
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a6d0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20a6d0u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20a6d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20a6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a6d8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20A6D8u;
    {
        const bool branch_taken_0x20a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6d8) {
            ctx->pc = 0x20A8B0u;
            goto label_20a8b0;
        }
    }
    ctx->pc = 0x20A6E0u;
label_20a6e0:
    // 0x20a6e0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a6e4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x20a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a6e8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a6ec: 0x248393e0  addiu       $v1, $a0, -0x6C20
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939616));
    // 0x20a6f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a6f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a6f8: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x20A6F8u;
    {
        const bool branch_taken_0x20a6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6f8) {
            ctx->pc = 0x20A8A8u;
            goto label_20a8a8;
        }
    }
    ctx->pc = 0x20A700u;
    // 0x20a700: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20a700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a704: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20a704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a708: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a70c: 0x248393e0  addiu       $v1, $a0, -0x6C20
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939616));
    // 0x20a710: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a714: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20a718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a71c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20A71Cu;
    {
        const bool branch_taken_0x20a71c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a71c) {
            ctx->pc = 0x20A748u;
            goto label_20a748;
        }
    }
    ctx->pc = 0x20A724u;
    // 0x20a724: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20a724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20a728: 0x2464dce0  addiu       $a0, $v1, -0x2320
    ctx->pc = 0x20a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x20a72c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x20a72cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3EDCE0u));
    // 0x20a730: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a734: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20a738: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a73c: 0x24839390  addiu       $v1, $a0, -0x6C70
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939536));
    // 0x20a740: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x20a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a744: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x20a744u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_20a748:
    // 0x20a748: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20A748u;
    SET_GPR_U32(ctx, 31, 0x20A750u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20A748u, 0x20A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A750u;
label_20a750:
    // 0x20a750: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20a754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20a754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a758: 0x0  nop
    ctx->pc = 0x20a758u;
    // NOP
    // 0x20a75c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a760: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20a764: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20A764u;
    SET_GPR_U32(ctx, 31, 0x20A76Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20A764u, 0x20A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A76Cu;
label_20a76c:
    // 0x20a76c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20a770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20a770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a774: 0x0  nop
    ctx->pc = 0x20a774u;
    // NOP
    // 0x20a778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20a778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a77c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x20a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20a780: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a784: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20a784u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20a788: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x20a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x20a78c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a78cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a790: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x20a794: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A794u;
    {
        const bool branch_taken_0x20a794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a794) {
            ctx->pc = 0x20A800u;
            goto label_20a800;
        }
    }
    ctx->pc = 0x20A79Cu;
    // 0x20a79c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20a7a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a7a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20a7a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20a7ac: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x20a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20a7b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a7b4: 0x24629390  addiu       $v0, $v1, -0x6C70
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a7b8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a7bc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a7c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a7c4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a7c8: 0x24829390  addiu       $v0, $a0, -0x6C70
    ctx->pc = 0x20a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939536));
    // 0x20a7cc: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x20a7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a7d0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a7d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20a7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a7d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20a7d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a7dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20a7e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20a7e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a7ec: 0xc42d9490  lwc1        $f13, -0x6B70($at)
    ctx->pc = 0x20a7ecu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a7f0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20a7f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20a7f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7f8: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20A7F8u;
    SET_GPR_U32(ctx, 31, 0x20A800u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20A7F8u, 0x20A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A800u;
label_20a800:
    // 0x20a800: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a804: 0x9022ec68  lbu         $v0, -0x1398($at)
    ctx->pc = 0x20a804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x20a808: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20A808u;
    {
        const bool branch_taken_0x20a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a808) {
            ctx->pc = 0x20A8A8u;
            goto label_20a8a8;
        }
    }
    ctx->pc = 0x20A810u;
    // 0x20a810: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a814: 0x8c2294b0  lw          $v0, -0x6B50($at)
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6194B0u));
    // 0x20a818: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20A818u;
    {
        const bool branch_taken_0x20a818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a818) {
            ctx->pc = 0x20A8A8u;
            goto label_20a8a8;
        }
    }
    ctx->pc = 0x20A820u;
    // 0x20a820: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x20a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a824: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a828: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a82c: 0x244293e0  addiu       $v0, $v0, -0x6C20
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
    // 0x20a830: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a838: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x20a838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20a83c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A83Cu;
    {
        const bool branch_taken_0x20a83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a83c) {
            ctx->pc = 0x20A8A8u;
            goto label_20a8a8;
        }
    }
    ctx->pc = 0x20A844u;
    // 0x20a844: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a848: 0x24518c70  addiu       $s1, $v0, -0x7390
    ctx->pc = 0x20a848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x20a84c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a850: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20a854: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x20a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x20a858: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20a85c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x20a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20a860: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A860u;
    SET_GPR_U32(ctx, 31, 0x20A868u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A868u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A868u) { return; }
    ctx->pc = 0x20A868u;
label_20a868:
    // 0x20a868: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x20a86c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20a870: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a874: 0x248292c0  addiu       $v0, $a0, -0x6D40
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x20a878: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20a878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20a87c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a880: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x20a880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20a884: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x20a888: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x20A888u;
    SET_GPR_U32(ctx, 31, 0x20A890u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20A888u, 0x20A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A890u;
label_20a890:
    // 0x20a890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A890u;
    {
        const bool branch_taken_0x20a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a890) {
            ctx->pc = 0x20A8A8u;
            goto label_20a8a8;
        }
    }
    ctx->pc = 0x20A898u;
    // 0x20a898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a89c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a8a0: 0xac2494b0  sw          $a0, -0x6B50($at)
    ctx->pc = 0x20a8a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6194B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B0u, _value); } while (0);
    // 0x20a8a4: 0x0  nop
    ctx->pc = 0x20a8a4u;
    // NOP
label_20a8a8:
    // 0x20a8a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a8ac: 0x0  nop
    ctx->pc = 0x20a8acu;
    // NOP
label_20a8b0:
    // 0x20a8b0: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x20a8b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20a8b4: 0x14a0ff8a  bnez        $a1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x20A8B4u;
    {
        const bool branch_taken_0x20a8b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8b4) {
            ctx->pc = 0x20A6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a6e0;
        }
    }
    ctx->pc = 0x20A8BCu;
    // 0x20a8bc: 0x0  nop
    ctx->pc = 0x20a8bcu;
    // NOP
label_20a8c0:
    // 0x20a8c0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8c4: 0x84461278  lh          $a2, 0x1278($v0)
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20a8c8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x20a8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20a8cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a8ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a8d4: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x20A8D4u;
    {
        const bool branch_taken_0x20a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8d4) {
            ctx->pc = 0x20AAB8u;
            goto label_20aab8;
        }
    }
    ctx->pc = 0x20A8DCu;
    // 0x20a8dc: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8e0: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x20a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x20a8e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x20a8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a8e8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x20a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x20a8ec: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x20A8ECu;
    {
        const bool branch_taken_0x20a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8ec) {
            ctx->pc = 0x20AAB8u;
            goto label_20aab8;
        }
    }
    ctx->pc = 0x20A8F4u;
    // 0x20a8f4: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8f8: 0x84c2127a  lh          $v0, 0x127A($a2)
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4730)));
    // 0x20a8fc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20A8FCu;
    {
        const bool branch_taken_0x20a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8fc) {
            ctx->pc = 0x20A9ACu;
            goto label_20a9ac;
        }
    }
    ctx->pc = 0x20A904u;
    // 0x20a904: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a908: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20a908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20a90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a910: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a914: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20a914u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a918: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a91c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a920: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a924: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20a924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20a928: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a92c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a930: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a934: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20a934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x20a938: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a93c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a940: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a944: 0xac4400f8  sw          $a0, 0xF8($v0)
    ctx->pc = 0x20a944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 4));
    // 0x20a948: 0x24020506  addiu       $v0, $zero, 0x506
    ctx->pc = 0x20a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x20a94c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x20a94cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a950: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a954: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x20a958: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20a95c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20a95cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a960: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a964: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20a964u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20a968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a96c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20a970: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20a974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a978: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a97c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x20a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a980: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20a984: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20A984u;
    SET_GPR_U32(ctx, 31, 0x20A98Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20A98Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A98Cu) { return; }
    ctx->pc = 0x20A98Cu;
label_20a98c:
    // 0x20a98c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20a990: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20a994: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a998: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x20a998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x20a99c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a9a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20a9a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a9a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20A9A4u;
    SET_GPR_U32(ctx, 31, 0x20A9ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20A9A4u, 0x20A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9ACu;
label_20a9ac:
    // 0x20a9ac: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a9b0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20a9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20a9b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a9b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a9bc: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x20a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x20a9c0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20A9C0u;
    {
        const bool branch_taken_0x20a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a9c0) {
            ctx->pc = 0x20AAB8u;
            goto label_20aab8;
        }
    }
    ctx->pc = 0x20A9C8u;
    // 0x20a9c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a9cc: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a9ccu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a9d0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a9d8: 0x0  nop
    ctx->pc = 0x20a9d8u;
    // NOP
    // 0x20a9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a9e0: 0x0  nop
    ctx->pc = 0x20a9e0u;
    // NOP
    // 0x20a9e4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20A9E4u;
    {
        const bool branch_taken_0x20a9e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a9e4) {
            ctx->pc = 0x20AA04u;
            goto label_20aa04;
        }
    }
    ctx->pc = 0x20A9ECu;
    // 0x20a9ec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a9f4: 0x0  nop
    ctx->pc = 0x20a9f4u;
    // NOP
    // 0x20a9f8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x20a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x20a9fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A9FCu;
    {
        const bool branch_taken_0x20a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9fc) {
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20AA04u;
label_20aa04:
    // 0x20aa04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa08: 0xc4209490  lwc1        $f0, -0x6B70($at)
    ctx->pc = 0x20aa08u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aa0c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x20aa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_20aa10:
    // 0x20aa10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa14: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20aa14u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aa18: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20aa1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20aa1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aa20: 0x0  nop
    ctx->pc = 0x20aa20u;
    // NOP
    // 0x20aa24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20aa24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aa28: 0x0  nop
    ctx->pc = 0x20aa28u;
    // NOP
    // 0x20aa2c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20AA2Cu;
    {
        const bool branch_taken_0x20aa2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aa2c) {
            ctx->pc = 0x20AA4Cu;
            goto label_20aa4c;
        }
    }
    ctx->pc = 0x20AA34u;
    // 0x20aa34: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20aa38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20aa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aa3c: 0x0  nop
    ctx->pc = 0x20aa3cu;
    // NOP
    // 0x20aa40: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x20aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x20aa44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AA44u;
    {
        const bool branch_taken_0x20aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa44) {
            ctx->pc = 0x20AA58u;
            goto label_20aa58;
        }
    }
    ctx->pc = 0x20AA4Cu;
label_20aa4c:
    // 0x20aa4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa50: 0xc4209490  lwc1        $f0, -0x6B70($at)
    ctx->pc = 0x20aa50u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aa54: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x20aa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_20aa58:
    // 0x20aa58: 0x240b000f  addiu       $t3, $zero, 0xF
    ctx->pc = 0x20aa58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20aa5c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x20aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x20aa60: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aa64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20aa68: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20aa68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20aa6c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20aa70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20aa70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20aa74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20aa74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aa78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20aa78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aa7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20aa80: 0x244992c0  addiu       $t1, $v0, -0x6D40
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20aa84: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x20aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20aa88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa8c: 0xc42d9490  lwc1        $f13, -0x6B70($at)
    ctx->pc = 0x20aa8cu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20aa90: 0xc7ae0208  lwc1        $f14, 0x208($sp)
    ctx->pc = 0x20aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20aa94: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20aa98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aa9c: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20aa9cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20aaa0: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20AAA0u;
    SET_GPR_U32(ctx, 31, 0x20AAA8u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20AAA0u, 0x20AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAA8u;
label_20aaa8:
    // 0x20aaa8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aaac: 0x8c621374  lw          $v0, 0x1374($v1)
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20aab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aab4: 0xac621374  sw          $v0, 0x1374($v1)
    ctx->pc = 0x20aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4980), GPR_U32(ctx, 2));
label_20aab8:
    // 0x20aab8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aabc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20aabcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aac0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20AAC0u;
    SET_GPR_U32(ctx, 31, 0x20AAC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20AAC0u, 0x20AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAC8u;
label_20aac8:
    // 0x20aac8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aacc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20AACCu;
    SET_GPR_U32(ctx, 31, 0x20AAD4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20AACCu, 0x20AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD4u;
label_20aad4:
    // 0x20aad4: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aad8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20aadc: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20AADCu;
    SET_GPR_U32(ctx, 31, 0x20AAE4u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20AADCu, 0x20AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAE4u;
label_20aae4:
    // 0x20aae4: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aae8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20AAE8u;
    SET_GPR_U32(ctx, 31, 0x20AAF0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20AAE8u, 0x20AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAF0u;
label_20aaf0:
    // 0x20aaf0: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aaf4: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x20aaf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20aaf8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aafc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20aafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ab00: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab04: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x20ab04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x20ab08: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x20AB08u;
    {
        const bool branch_taken_0x20ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab08) {
            ctx->pc = 0x20ABFCu;
            goto label_20abfc;
        }
    }
    ctx->pc = 0x20AB10u;
    // 0x20ab10: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab14: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20ab1c: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x20ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x20ab20: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab24: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab28: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20ab2c: 0xac4400f4  sw          $a0, 0xF4($v0)
    ctx->pc = 0x20ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 4));
    // 0x20ab30: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab34: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab38: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20ab3c: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x20ab40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20ab40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ab44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ab48: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ab4c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x20AB4Cu;
    SET_GPR_U32(ctx, 31, 0x20AB54u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x20AB4Cu, 0x20AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB54u;
label_20ab54:
    // 0x20ab54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ab58: 0x8c249310  lw          $a0, -0x6CF0($at)
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619310u));
    // 0x20ab5c: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x20ab60: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20ab64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ab68: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x20ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x20ab6c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab70: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x20ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ab74: 0x3c054662  lui         $a1, 0x4662
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18018 << 16));
    // 0x20ab78: 0x34ab9000  ori         $t3, $a1, 0x9000
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x20ab7c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x20ab7cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab80: 0x0  nop
    ctx->pc = 0x20ab80u;
    // NOP
    // 0x20ab84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20ab84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ab88: 0x0  nop
    ctx->pc = 0x20ab88u;
    // NOP
    // 0x20ab8c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x20AB8Cu;
    {
        const bool branch_taken_0x20ab8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ab8c) {
            ctx->pc = 0x20ABCCu;
            goto label_20abcc;
        }
    }
    ctx->pc = 0x20AB94u;
    // 0x20ab94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab98: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab9c: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x20ab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x20aba0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20aba4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aba8: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x20aba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x20abac: 0x8fa90218  lw          $t1, 0x218($sp)
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abb0: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x20abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abb4: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x20abb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abb8: 0xa1400003  sb          $zero, 0x3($t2)
    ctx->pc = 0x20abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abbc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20abc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20ABC4u;
    {
        const bool branch_taken_0x20abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abc4) {
            ctx->pc = 0x20ABFCu;
            goto label_20abfc;
        }
    }
    ctx->pc = 0x20ABCCu;
label_20abcc:
    // 0x20abcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20abd0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20abd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20abdc: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abe0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x20abe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20abe4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abe8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20abe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abec: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abf0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x20abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abf4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abf8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20abfc:
    // 0x20abfc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x20ac00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ac00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ac04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac08: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20ac08u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20ac0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ac10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac14: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x20ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619388u, _value); } while (0); }
    // 0x20ac18: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ac1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20ac20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac24: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac28: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20ac2c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20ac30: 0xc05db20  jal         func_176C80
    ctx->pc = 0x20AC30u;
    SET_GPR_U32(ctx, 31, 0x20AC38u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x20AC30u, 0x20AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC38u;
label_20ac38:
    // 0x20ac38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac3c: 0x8c309380  lw          $s0, -0x6C80($at)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac40: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20ac40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20ac44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac48: 0xc42c9388  lwc1        $f12, -0x6C78($at)
    ctx->pc = 0x20ac48u;
    { uint32_t bits = FAST_READ32(0x619388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ac4c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x20AC4Cu;
    SET_GPR_U32(ctx, 31, 0x20AC54u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x20AC4Cu, 0x20AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC54u;
label_20ac54:
    // 0x20ac54: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x20ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x20ac58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ac58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ac5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac60: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac64: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ac68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ac6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ac70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ac74: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x20ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ac78: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x20ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20ac7c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x20ac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x20ac80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x20ac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ac88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac8c: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac90: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ac94: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20ac98: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ac9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20aca0: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20aca4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20aca8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x20aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x20acac: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x20acb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20acb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20acb4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20acb8: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20acbc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20acc0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20acc4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20acc8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20accc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20acd0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20acd4: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x20acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x20acd8: 0x3c033d20  lui         $v1, 0x3D20
    ctx->pc = 0x20acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15648 << 16));
    // 0x20acdc: 0x3465a0a1  ori         $a1, $v1, 0xA0A1
    ctx->pc = 0x20acdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41121);
    // 0x20ace0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ace0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ace4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ace8: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20acec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20acf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20acf4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20acf8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20acfc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad04: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x20ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x20ad08: 0x3c053d20  lui         $a1, 0x3D20
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15648 << 16));
    // 0x20ad0c: 0x34a6a0a1  ori         $a2, $a1, 0xA0A1
    ctx->pc = 0x20ad0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41121);
    // 0x20ad10: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20ad10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad18: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad1c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x20ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ad20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20ad24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ad28: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ad2c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x20ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad30: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20ad34: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x20ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x20ad38: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x20ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x20ad3c: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x20ad3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x20ad40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ad40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad48: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ad50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad54: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20ad58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ad5c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad64: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x20ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x20ad68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ad6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad70: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x20ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad74: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x20ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20ad78: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x20ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20ad7c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ad80: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x20ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x20ad84: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x20ad88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20ad8c: 0xac66007c  sw          $a2, 0x7C($v1)
    ctx->pc = 0x20ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 6));
    // 0x20ad90: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x20ad90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ad94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20ad94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ad98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ad98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ad9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ad9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ada0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ada4: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x20ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x20ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADB0u;
}
