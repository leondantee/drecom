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

// Function: BTL_tbl_set
// Address: 0x185af0 - 0x185e78
void BTL_tbl_set_0x185af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_tbl_set_0x185af0");
#endif

    switch (ctx->pc) {
        case 0x185b24u: goto label_185b24;
        case 0x185b48u: goto label_185b48;
        case 0x185b80u: goto label_185b80;
        case 0x185c24u: goto label_185c24;
        case 0x185c38u: goto label_185c38;
        case 0x185c54u: goto label_185c54;
        case 0x185ddcu: goto label_185ddc;
        case 0x185df0u: goto label_185df0;
        case 0x185e38u: goto label_185e38;
        default: break;
    }

    ctx->pc = 0x185af0u;

    // 0x185af0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x185af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x185af4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x185af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x185af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185b04: 0xa3a40078  sb          $a0, 0x78($sp)
    ctx->pc = 0x185b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x185b08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185b0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185b10: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x185b14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185b18: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x185b1c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x185B1Cu;
    SET_GPR_U32(ctx, 31, 0x185B24u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x185B1Cu, 0x185B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B24u;
label_185b24:
    // 0x185b24: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x185b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b28: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x185b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185b2c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x185b2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185b30: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x185b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b34: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x185b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185b38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185b3c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x185b3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x185b40: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x185B40u;
    SET_GPR_U32(ctx, 31, 0x185B48u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x185B40u, 0x185B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B48u;
label_185b48:
    // 0x185b48: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x185b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x185b4c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x185b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x185b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x185b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185b54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185b58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x185b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x185b5c: 0x24426c50  addiu       $v0, $v0, 0x6C50
    ctx->pc = 0x185b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27728));
    // 0x185b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185b64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x185b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185b68: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x185b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x185b6c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x185b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b70: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x185b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185b74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x185b74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185b78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x185B78u;
    SET_GPR_U32(ctx, 31, 0x185B80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x185B78u, 0x185B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B80u;
label_185b80:
    // 0x185b80: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x185b80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x185b84: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x185b84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185b88: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x185B88u;
    {
        const bool branch_taken_0x185b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b88) {
            ctx->pc = 0x185B94u;
            goto label_185b94;
        }
    }
    ctx->pc = 0x185B90u;
    // 0x185b90: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x185b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_185b94:
    // 0x185b94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185b98: 0xa0200347  sb          $zero, 0x347($at)
    ctx->pc = 0x185b98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480347u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480347u, _value); } while (0);
    // 0x185b9c: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x185ba0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BD0u;
            goto label_185bd0;
        }
    }
    ctx->pc = 0x185BA8u;
    // 0x185ba8: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x185bac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bb0: 0x90220348  lbu         $v0, 0x348($at)
    ctx->pc = 0x185bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480348u));
    // 0x185bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185BBCu;
    {
        const bool branch_taken_0x185bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bbc) {
            ctx->pc = 0x185BD0u;
            goto label_185bd0;
        }
    }
    ctx->pc = 0x185BC4u;
    // 0x185bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185bc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bcc: 0xa0220347  sb          $v0, 0x347($at)
    ctx->pc = 0x185bccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x480347u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480347u, _value); } while (0);
label_185bd0:
    // 0x185bd0: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x185bd4: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x185bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x185bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x185bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185bdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185be0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x185be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x185be4: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    // 0x185be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185bec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185bf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bf4: 0x8c22033c  lw          $v0, 0x33C($at)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48033Cu));
    // 0x185bf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x185bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x185bfc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x185bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x185c00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x185c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185c0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x185c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x185c10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c18: 0x244502f0  addiu       $a1, $v0, 0x2F0
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185c1c: 0xc0675b8  jal         func_19D6E0
    ctx->pc = 0x185C1Cu;
    SET_GPR_U32(ctx, 31, 0x185C24u);
    ctx->pc = 0x19D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E0u, 0x185C1Cu, 0x185C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C24u;
label_185c24:
    // 0x185c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x185c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c2c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x185c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185c30: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x185C30u;
    SET_GPR_U32(ctx, 31, 0x185C38u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x185C38u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185C38u) { return; }
    ctx->pc = 0x185C38u;
label_185c38:
    // 0x185c38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c3c: 0x244402c0  addiu       $a0, $v0, 0x2C0
    ctx->pc = 0x185c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x185c40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c44: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185c48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c4c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x185C4Cu;
    SET_GPR_U32(ctx, 31, 0x185C54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x185C4Cu, 0x185C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C54u;
label_185c54:
    // 0x185c54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c58: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185c58u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c60: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185c60u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185c68: 0x0  nop
    ctx->pc = 0x185c68u;
    // NOP
    // 0x185c6c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x185C6Cu;
    {
        const bool branch_taken_0x185c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185c6c) {
            ctx->pc = 0x185D08u;
            goto label_185d08;
        }
    }
    ctx->pc = 0x185C74u;
    // 0x185c74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c78: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185c78u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c80: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185c80u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185c84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185c88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x185c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x185c8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x185c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x185c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c94: 0x0  nop
    ctx->pc = 0x185c94u;
    // NOP
    // 0x185c98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ca0: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185ca0u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ca4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185ca8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cac: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185cb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cb4: 0xc42202c4  lwc1        $f2, 0x2C4($at)
    ctx->pc = 0x185cb4u;
    { uint32_t bits = FAST_READ32(0x4802C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cbc: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185cbcu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185cc0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cc8: 0x0  nop
    ctx->pc = 0x185cc8u;
    // NOP
    // 0x185ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185cd0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x185cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185cd4: 0x0  nop
    ctx->pc = 0x185cd4u;
    // NOP
    // 0x185cd8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x185CD8u;
    {
        const bool branch_taken_0x185cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185cd8) {
            ctx->pc = 0x185D8Cu;
            goto label_185d8c;
        }
    }
    ctx->pc = 0x185CE0u;
    // 0x185ce0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ce4: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185ce4u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ce8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cf0: 0x0  nop
    ctx->pc = 0x185cf0u;
    // NOP
    // 0x185cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185cf8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cfc: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185d00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185D00u;
    {
        const bool branch_taken_0x185d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d00) {
            ctx->pc = 0x185D8Cu;
            goto label_185d8c;
        }
    }
    ctx->pc = 0x185D08u;
label_185d08:
    // 0x185d08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d0c: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185d0cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d14: 0xc42002d4  lwc1        $f0, 0x2D4($at)
    ctx->pc = 0x185d14u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185d18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185d1c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x185d20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x185d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x185d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d28: 0x0  nop
    ctx->pc = 0x185d28u;
    // NOP
    // 0x185d2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185d30: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d34: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d34u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185d3c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d40: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185d44: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d48: 0xc42202c4  lwc1        $f2, 0x2C4($at)
    ctx->pc = 0x185d48u;
    { uint32_t bits = FAST_READ32(0x4802C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185d4c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185d54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d58: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d58u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d60: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x185d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185d64: 0x0  nop
    ctx->pc = 0x185d64u;
    // NOP
    // 0x185d68: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x185D68u;
    {
        const bool branch_taken_0x185d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d68) {
            ctx->pc = 0x185D8Cu;
            goto label_185d8c;
        }
    }
    ctx->pc = 0x185D70u;
    // 0x185d70: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185d74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185d78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d7c: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d7cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d88: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
label_185d8c:
    // 0x185d8c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x185d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d94: 0xc42002d4  lwc1        $f0, 0x2D4($at)
    ctx->pc = 0x185d94u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185d9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185da0: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
    // 0x185da4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x185da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185da8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185dac: 0xc4200320  lwc1        $f0, 0x320($at)
    ctx->pc = 0x185dacu;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185db0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185db0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185db4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185db8: 0xc4200334  lwc1        $f0, 0x334($at)
    ctx->pc = 0x185db8u;
    { uint32_t bits = FAST_READ32(0x480334u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185dbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185dc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185dc4: 0xe4200324  swc1        $f0, 0x324($at)
    ctx->pc = 0x185dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480324u, _value); } while (0); }
    // 0x185dc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185dcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185dd0: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185dd4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x185DD4u;
    SET_GPR_U32(ctx, 31, 0x185DDCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x185DDCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185DDCu) { return; }
    ctx->pc = 0x185DDCu;
label_185ddc:
    // 0x185ddc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x185ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x185de0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185de4: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185de8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x185DE8u;
    SET_GPR_U32(ctx, 31, 0x185DF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x185DF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185DF0u) { return; }
    ctx->pc = 0x185DF0u;
label_185df0:
    // 0x185df0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185df4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dfc: 0x0  nop
    ctx->pc = 0x185dfcu;
    // NOP
    // 0x185e00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185e04: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x185e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x185e08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x185e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e0c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185e14: 0x0  nop
    ctx->pc = 0x185e14u;
    // NOP
    // 0x185e18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185e1c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x185e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x185e20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185e24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x185e28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x185e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185e2c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x185e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x185e30: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x185E30u;
    SET_GPR_U32(ctx, 31, 0x185E38u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x185E30u, 0x185E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E38u;
label_185e38:
    // 0x185e38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x185e38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x185e3c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E5Cu;
            goto label_185e5c;
        }
    }
    ctx->pc = 0x185E44u;
    // 0x185e44: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x185e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x185e48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185e4c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x185e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185e54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185e58: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
label_185e5c:
    // 0x185e5c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x185e5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185e6c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x185e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185e70: 0x3e00008  jr          $ra
    ctx->pc = 0x185E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185E78u;
}
