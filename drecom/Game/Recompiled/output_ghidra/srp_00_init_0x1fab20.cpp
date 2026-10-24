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

// Function: srp_00_init
// Address: 0x1fab20 - 0x1fb0d8
void srp_00_init_0x1fab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_00_init_0x1fab20");
#endif

    switch (ctx->pc) {
        case 0x1fab7cu: goto label_1fab7c;
        case 0x1fab88u: goto label_1fab88;
        case 0x1fab9cu: goto label_1fab9c;
        case 0x1fabf8u: goto label_1fabf8;
        case 0x1fac30u: goto label_1fac30;
        case 0x1fac80u: goto label_1fac80;
        case 0x1faca0u: goto label_1faca0;
        case 0x1facb0u: goto label_1facb0;
        case 0x1face0u: goto label_1face0;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1fb024u: goto label_1fb024;
        default: break;
    }

    ctx->pc = 0x1fab20u;

    // 0x1fab20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1fab24: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1fab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1fab28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fab2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fab30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fab34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fab38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fab3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fab40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fab44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fab48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fab4c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1fab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x1fab50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fab54: 0x8c570ac0  lw          $s7, 0xAC0($v0)
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x1fab58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fab60: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x1fab60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x1fab64: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fab68: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x1fab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x1fab6c: 0x8c5e0010  lw          $fp, 0x10($v0)
    ctx->pc = 0x1fab6cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fab70: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1fab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fab74: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x1FAB74u;
    SET_GPR_U32(ctx, 31, 0x1FAB7Cu);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x1FAB74u, 0x1FAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB7Cu;
label_1fab7c:
    // 0x1fab7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fab80: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1FAB80u;
    SET_GPR_U32(ctx, 31, 0x1FAB88u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1FAB80u, 0x1FAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB88u;
label_1fab88:
    // 0x1fab88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fab8c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fab90: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x1fab90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fab94: 0xc067678  jal         func_19D9E0
    ctx->pc = 0x1FAB94u;
    SET_GPR_U32(ctx, 31, 0x1FAB9Cu);
    ctx->pc = 0x19D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9E0u, 0x1FAB94u, 0x1FAB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB9Cu;
label_1fab9c:
    // 0x1fab9c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1fab9cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1faba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1faba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1faba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faba8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1faba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabac: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1fabacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1fabb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fabb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fabb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fabb8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabbc: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fabbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
    // 0x1fabc0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabc4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fabc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fabc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fabc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fabcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fabccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fabd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FABD0u;
    {
        const bool branch_taken_0x1fabd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabd0) {
            ctx->pc = 0x1FAC08u;
            goto label_1fac08;
        }
    }
    ctx->pc = 0x1FABD8u;
    // 0x1fabd8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabdc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabe0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fabe4: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x1fabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1fabe8: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fabec: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x1fabecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1fabf0: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1FABF0u;
    SET_GPR_U32(ctx, 31, 0x1FABF8u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1FABF0u, 0x1FABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABF8u;
label_1fabf8:
    // 0x1fabf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fabfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fabfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac00: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac04: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
label_1fac08:
    // 0x1fac08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac0c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fac0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fac10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fac14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fac18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fac20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac24: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac28: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FAC28u;
    SET_GPR_U32(ctx, 31, 0x1FAC30u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FAC28u, 0x1FAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC30u;
label_1fac30:
    // 0x1fac30: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac34: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fac34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fac38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAC38u;
    {
        const bool branch_taken_0x1fac38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fac38) {
            ctx->pc = 0x1FAC54u;
            goto label_1fac54;
        }
    }
    ctx->pc = 0x1FAC40u;
    // 0x1fac40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fac40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac44: 0x0  nop
    ctx->pc = 0x1fac44u;
    // NOP
    // 0x1fac48: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fac48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fac4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAC4Cu;
    {
        const bool branch_taken_0x1fac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac4c) {
            ctx->pc = 0x1FAC70u;
            goto label_1fac70;
        }
    }
    ctx->pc = 0x1FAC54u;
label_1fac54:
    // 0x1fac54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fac54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fac58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fac5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fac60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fac60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac64: 0x0  nop
    ctx->pc = 0x1fac64u;
    // NOP
    // 0x1fac68: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fac68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fac6c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fac6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fac70:
    // 0x1fac70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac78: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FAC78u;
    SET_GPR_U32(ctx, 31, 0x1FAC80u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FAC80u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FAC80u) { return; }
    ctx->pc = 0x1FAC80u;
label_1fac80:
    // 0x1fac80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac88: 0x0  nop
    ctx->pc = 0x1fac88u;
    // NOP
    // 0x1fac8c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1fac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1fac90: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fac90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fac94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fac94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac98: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1FAC98u;
    {
        const bool branch_taken_0x1fac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac98) {
            ctx->pc = 0x1FAE10u;
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FACA0u;
label_1faca0:
    // 0x1faca0: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FACA0u;
    {
        const bool branch_taken_0x1faca0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faca0) {
            ctx->pc = 0x1FAD38u;
            goto label_1fad38;
        }
    }
    ctx->pc = 0x1FACA8u;
    // 0x1faca8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FACA8u;
    SET_GPR_U32(ctx, 31, 0x1FACB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FACA8u, 0x1FACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACB0u;
label_1facb0:
    // 0x1facb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facb4: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1facb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1facb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1facb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1facbc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facc0: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1facc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1facc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1facc8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1facc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1faccc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1facd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1facd4: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1facd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1facd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FACD8u;
    SET_GPR_U32(ctx, 31, 0x1FACE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FACD8u, 0x1FACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACE0u;
label_1face0:
    // 0x1face0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1face4: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1face4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1face8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1face8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1facec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facf0: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1facf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1facf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1facf8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1facfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad04: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fad08: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FAD08u;
    SET_GPR_U32(ctx, 31, 0x1FAD10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FAD08u, 0x1FAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD10u;
label_1fad10:
    // 0x1fad10: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad14: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fad18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fad1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad20: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fad24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fad24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fad28: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fad2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad34: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
label_1fad38:
    // 0x1fad38: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fad3c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad48: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad4c: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fad50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FAD50u;
    SET_GPR_U32(ctx, 31, 0x1FAD58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FAD50u, 0x1FAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD58u;
label_1fad58:
    // 0x1fad58: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fad5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad64: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fad68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fad68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fad6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad70: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fad70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad78: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FAD78u;
    SET_GPR_U32(ctx, 31, 0x1FAD80u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FAD78u, 0x1FAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD80u;
label_1fad80:
    // 0x1fad80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad84: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fad84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fad88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fad8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fad90: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad98: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fad9c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fada0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fada0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fada4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fada8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FADA8u;
    SET_GPR_U32(ctx, 31, 0x1FADB0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FADA8u, 0x1FADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADB0u;
label_1fadb0:
    // 0x1fadb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fadb4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fadb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fadb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fadb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fadbc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fadc0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FADC0u;
    {
        const bool branch_taken_0x1fadc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fadc0) {
            ctx->pc = 0x1FADDCu;
            goto label_1faddc;
        }
    }
    ctx->pc = 0x1FADC8u;
    // 0x1fadc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fadc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fadcc: 0x0  nop
    ctx->pc = 0x1fadccu;
    // NOP
    // 0x1fadd0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fadd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fadd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FADD4u;
    {
        const bool branch_taken_0x1fadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fadd4) {
            ctx->pc = 0x1FADF8u;
            goto label_1fadf8;
        }
    }
    ctx->pc = 0x1FADDCu;
label_1faddc:
    // 0x1faddc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1faddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fade0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fade4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fade4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fade8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fade8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fadec: 0x0  nop
    ctx->pc = 0x1fadecu;
    // NOP
    // 0x1fadf0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fadf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fadf4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fadf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fadf8:
    // 0x1fadf8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fadfc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fadfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fae00: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FAE00u;
    SET_GPR_U32(ctx, 31, 0x1FAE08u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FAE08u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FAE08u) { return; }
    ctx->pc = 0x1FAE08u;
label_1fae08:
    // 0x1fae08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fae08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fae0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fae10:
    // 0x1fae10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae14: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fae14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fae18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae1c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fae1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fae20: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1FAE20u;
    {
        const bool branch_taken_0x1fae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fae20) {
            ctx->pc = 0x1FACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faca0;
        }
    }
    ctx->pc = 0x1FAE28u;
    // 0x1fae28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae2c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fae2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fae30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fae30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae34: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae38: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fae38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fae3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fae44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fae44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae48: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae4c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fae50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fae50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fae54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAE54u;
    {
        const bool branch_taken_0x1fae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae54) {
            ctx->pc = 0x1FAE98u;
            goto label_1fae98;
        }
    }
    ctx->pc = 0x1FAE5Cu;
label_1fae5c:
    // 0x1fae5c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae60: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fae60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fae64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fae6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fae70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fae78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fae7c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fae80: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae88: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fae8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fae90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fae94: 0x0  nop
    ctx->pc = 0x1fae94u;
    // NOP
label_1fae98:
    // 0x1fae98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae9c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fae9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1faea0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faea4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1faea4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1faea8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FAEA8u;
    {
        const bool branch_taken_0x1faea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faea8) {
            ctx->pc = 0x1FAE5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae5c;
        }
    }
    ctx->pc = 0x1FAEB0u;
    // 0x1faeb0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1faeb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faeb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAEB4u;
    {
        const bool branch_taken_0x1faeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faeb4) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAEBCu;
label_1faebc:
    // 0x1faebc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faec0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1faec4: 0xa0600290  sb          $zero, 0x290($v1)
    ctx->pc = 0x1faec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1faec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1faecc: 0x0  nop
    ctx->pc = 0x1faeccu;
    // NOP
label_1faed0:
    // 0x1faed0: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1faed4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FAED4u;
    {
        const bool branch_taken_0x1faed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faed4) {
            ctx->pc = 0x1FAEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faebc;
        }
    }
    ctx->pc = 0x1FAEDCu;
    // 0x1faedc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faee0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1faee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1faee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faeec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faef0: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1faef0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faef4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faef8: 0x906302aa  lbu         $v1, 0x2AA($v1)
    ctx->pc = 0x1faef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1faefc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faf04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf08: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1faf08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf10: 0x24740290  addiu       $s4, $v1, 0x290
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x1faf14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FAF14u;
    {
        const bool branch_taken_0x1faf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf14) {
            ctx->pc = 0x1FAF60u;
            goto label_1faf60;
        }
    }
    ctx->pc = 0x1FAF1Cu;
label_1faf1c:
    // 0x1faf1c: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1faf20: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1faf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1faf24: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1faf24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1faf28: 0x0  nop
    ctx->pc = 0x1faf28u;
    // NOP
    // 0x1faf2c: 0x0  nop
    ctx->pc = 0x1faf2cu;
    // NOP
    // 0x1faf30: 0x1812  mflo        $v1
    ctx->pc = 0x1faf30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1faf34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf38: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1faf38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf3c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1faf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1faf40: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1faf44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faf48: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x1faf48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf4c: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x1faf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1faf50: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1faf50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf54: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1faf58: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1faf58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf5c: 0x0  nop
    ctx->pc = 0x1faf5cu;
    // NOP
label_1faf60:
    // 0x1faf60: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1faf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1faf64: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1faf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf68: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FAF68u;
    {
        const bool branch_taken_0x1faf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf68) {
            ctx->pc = 0x1FAF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faf1c;
        }
    }
    ctx->pc = 0x1FAF70u;
    // 0x1faf70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf74: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1faf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf78: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1faf7c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1faf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1faf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1faf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faf84: 0x0  nop
    ctx->pc = 0x1faf84u;
    // NOP
    // 0x1faf88: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1faf88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faf8c: 0x0  nop
    ctx->pc = 0x1faf8cu;
    // NOP
    // 0x1faf90: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FAF90u;
    {
        const bool branch_taken_0x1faf90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faf90) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAF98u;
    // 0x1faf98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf9c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1faf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fafa0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fafa4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fafa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fafa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fafac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fafb0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fafb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fafb4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAFB4u;
    {
        const bool branch_taken_0x1fafb4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fafb4) {
            ctx->pc = 0x1FAFD0u;
            goto label_1fafd0;
        }
    }
    ctx->pc = 0x1FAFBCu;
    // 0x1fafbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fafbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fafc0: 0x0  nop
    ctx->pc = 0x1fafc0u;
    // NOP
    // 0x1fafc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fafc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fafc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAFC8u;
    {
        const bool branch_taken_0x1fafc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fafc8) {
            ctx->pc = 0x1FAFECu;
            goto label_1fafec;
        }
    }
    ctx->pc = 0x1FAFD0u;
label_1fafd0:
    // 0x1fafd0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fafd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fafd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fafd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fafd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fafdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fafdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fafe0: 0x0  nop
    ctx->pc = 0x1fafe0u;
    // NOP
    // 0x1fafe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fafe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fafe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fafe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fafec:
    // 0x1fafec: 0x0  nop
    ctx->pc = 0x1fafecu;
    // NOP
    // 0x1faff0: 0x0  nop
    ctx->pc = 0x1faff0u;
    // NOP
    // 0x1faff4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1faff4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1faff8: 0x0  nop
    ctx->pc = 0x1faff8u;
    // NOP
    // 0x1faffc: 0x0  nop
    ctx->pc = 0x1faffcu;
    // NOP
    // 0x1fb000: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fb000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1fb004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB004u;
    {
        const bool branch_taken_0x1fb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb004) {
            ctx->pc = 0x1FB018u;
            goto label_1fb018;
        }
    }
    ctx->pc = 0x1FB00Cu;
label_1fb00c:
    // 0x1fb00c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb010: 0x0  nop
    ctx->pc = 0x1fb010u;
    // NOP
    // 0x1fb014: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fb014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1fb018:
    // 0x1fb018: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb018u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb01c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB01Cu;
    {
        const bool branch_taken_0x1fb01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb01c) {
            ctx->pc = 0x1FB088u;
            goto label_1fb088;
        }
    }
    ctx->pc = 0x1FB024u;
label_1fb024:
    // 0x1fb024: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fb028: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb02c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB02Cu;
    {
        const bool branch_taken_0x1fb02c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fb02c) {
            ctx->pc = 0x1FB048u;
            goto label_1fb048;
        }
    }
    ctx->pc = 0x1FB034u;
    // 0x1fb034: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fb034u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb038: 0x0  nop
    ctx->pc = 0x1fb038u;
    // NOP
    // 0x1fb03c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fb03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB040u;
    {
        const bool branch_taken_0x1fb040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb040) {
            ctx->pc = 0x1FB064u;
            goto label_1fb064;
        }
    }
    ctx->pc = 0x1FB048u;
label_1fb048:
    // 0x1fb048: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fb048u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fb04c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fb04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fb050: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fb050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fb054: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fb054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb058: 0x0  nop
    ctx->pc = 0x1fb058u;
    // NOP
    // 0x1fb05c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fb05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb060: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fb060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fb064:
    // 0x1fb064: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fb064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb06c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fb06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fb070: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fb074: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fb074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fb078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb07c: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x1fb07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x1fb080: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb084: 0x0  nop
    ctx->pc = 0x1fb084u;
    // NOP
label_1fb088:
    // 0x1fb088: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fb088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fb08c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb08cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb090: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb098: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fb098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fb09c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FB09Cu;
    {
        const bool branch_taken_0x1fb09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb09c) {
            ctx->pc = 0x1FB024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb024;
        }
    }
    ctx->pc = 0x1FB0A4u;
    // 0x1fb0a4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1fb0a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fb0a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fb0a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb0ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fb0acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb0b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fb0b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb0b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fb0b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb0b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb0bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb0c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb0cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1fb0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0D8u;
}
