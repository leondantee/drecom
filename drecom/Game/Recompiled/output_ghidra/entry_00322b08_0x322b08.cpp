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

// Function: entry_00322b08
// Address: 0x322b08 - 0x322c74
void entry_00322b08_0x322b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322b08_0x322b08");
#endif

    switch (ctx->pc) {
        case 0x322ba8u: goto label_322ba8;
        case 0x322c48u: goto label_322c48;
        default: break;
    }

    ctx->pc = 0x322b08u;

    // 0x322b08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b0c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x322b10: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x322b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x322b14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322b1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x322b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x322b20: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x322b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x322b24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x322b2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x322b30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322b38: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x322b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x322b3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x322b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x322b40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x322b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x322b44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b48: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x322b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x322b4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x322b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x322b50: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x322b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x322b54: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x322B54u;
    {
        const bool branch_taken_0x322b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322b54) {
            ctx->pc = 0x322D60u;
            return;
        }
    }
    ctx->pc = 0x322B5Cu;
    // 0x322b5c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x322b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x322b60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x322b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322b64: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x322b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x322b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322b6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322b70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x322b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x322b74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322b78: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x322b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322b7c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322b84: 0x0  nop
    ctx->pc = 0x322b84u;
    // NOP
    // 0x322b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322b8c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x322b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x322b90: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x322b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322b98: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x322b9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322b9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322ba0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322BA0u;
    SET_GPR_U32(ctx, 31, 0x322BA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322BA0u, 0x322BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322BA8u;
label_322ba8:
    // 0x322ba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bac: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bb8: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x322bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322bc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bc8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x322bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x322bcc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x322bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x322bd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x322bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x322bd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x322bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x322bd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322be0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x322be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x322be4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322be8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bec: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x322becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bf0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bf4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bf8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c00: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c04: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x322c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c10: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c1c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x322c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c28: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c34: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x322c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c3c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x322c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c40: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322C40u;
    SET_GPR_U32(ctx, 31, 0x322C48u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322C40u, 0x322C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C48u;
label_322c48:
    // 0x322c48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c4c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x322c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c54: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x322c54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322c5c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322c60: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x322C60u;
    {
        const bool branch_taken_0x322c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x322c60) {
            ctx->pc = 0x322C74u;
            return;
        }
    }
    ctx->pc = 0x322C68u;
    // 0x322c68: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x322c68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x322C6Cu;
    {
        const bool branch_taken_0x322c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c6c) {
            ctx->pc = 0x322C90u;
            return;
        }
    }
    ctx->pc = 0x322C74u;
}
