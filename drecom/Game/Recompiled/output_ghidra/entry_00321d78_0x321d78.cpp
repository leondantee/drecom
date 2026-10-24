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

// Function: entry_00321d78
// Address: 0x321d78 - 0x321edc
void entry_00321d78_0x321d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321d78_0x321d78");
#endif

    switch (ctx->pc) {
        case 0x321d9cu: goto label_321d9c;
        case 0x321dc0u: goto label_321dc0;
        case 0x321de4u: goto label_321de4;
        case 0x321e18u: goto label_321e18;
        case 0x321eb0u: goto label_321eb0;
        default: break;
    }

    ctx->pc = 0x321d78u;

    // 0x321d78: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x321d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x321d7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x321d80: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x321d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x321d84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321d88: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x321d88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321d8c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x321d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321d90: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x321d90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x321d94: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321D94u;
    SET_GPR_U32(ctx, 31, 0x321D9Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321D94u, 0x321D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D9Cu;
label_321d9c:
    // 0x321d9c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x321d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x321da0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x321da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321da4: 0x0  nop
    ctx->pc = 0x321da4u;
    // NOP
    // 0x321da8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321dac: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x321dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321db0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321db4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x321db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x321db8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321DB8u;
    SET_GPR_U32(ctx, 31, 0x321DC0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321DB8u, 0x321DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DC0u;
label_321dc0:
    // 0x321dc0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x321dc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321dc8: 0x0  nop
    ctx->pc = 0x321dc8u;
    // NOP
    // 0x321dcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321dd0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x321dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321dd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321dd8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x321dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x321ddc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321DDCu;
    SET_GPR_U32(ctx, 31, 0x321DE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321DDCu, 0x321DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DE4u;
label_321de4:
    // 0x321de4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x321de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x321de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321dec: 0x0  nop
    ctx->pc = 0x321decu;
    // NOP
    // 0x321df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321df4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x321df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321df8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321dfc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x321dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x321e00: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x321e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x321e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321e08: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x321e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321e0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321e0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321e10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x321E10u;
    SET_GPR_U32(ctx, 31, 0x321E18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x321E10u, 0x321E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E18u;
label_321e18:
    // 0x321e18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e1c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x321e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x321e20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e28: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x321e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e34: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x321e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x321e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321e3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e44: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x321e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x321e48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321e4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e50: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e54: 0xa082011b  sb          $v0, 0x11B($a0)
    ctx->pc = 0x321e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x321e58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e60: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x321e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e68: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x321e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e6c: 0xa060013b  sb          $zero, 0x13B($v1)
    ctx->pc = 0x321e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e78: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x321e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e84: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x321e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e90: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x321e90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e9c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x321e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x321ea0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ea4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321ea8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x321EA8u;
    SET_GPR_U32(ctx, 31, 0x321EB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x321EA8u, 0x321EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321EB0u;
label_321eb0:
    // 0x321eb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321eb4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x321eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x321eb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ebc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x321ec0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321ec4: 0x34570011  ori         $s7, $v0, 0x11
    ctx->pc = 0x321ec4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321ec8: 0x14770004  bne         $v1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x321EC8u;
    {
        const bool branch_taken_0x321ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x321ec8) {
            ctx->pc = 0x321EDCu;
            return;
        }
    }
    ctx->pc = 0x321ED0u;
    // 0x321ed0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x321ed0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321ed4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321ED4u;
    {
        const bool branch_taken_0x321ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ed4) {
            ctx->pc = 0x321F00u;
            return;
        }
    }
    ctx->pc = 0x321EDCu;
}
