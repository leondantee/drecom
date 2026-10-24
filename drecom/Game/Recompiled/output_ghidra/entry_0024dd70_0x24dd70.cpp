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

// Function: entry_0024dd70
// Address: 0x24dd70 - 0x24e034
void entry_0024dd70_0x24dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024dd70_0x24dd70");
#endif

    switch (ctx->pc) {
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24deccu: goto label_24decc;
        case 0x24ded8u: goto label_24ded8;
        case 0x24df38u: goto label_24df38;
        case 0x24df44u: goto label_24df44;
        case 0x24dfa4u: goto label_24dfa4;
        case 0x24dfb0u: goto label_24dfb0;
        case 0x24e010u: goto label_24e010;
        case 0x24e01cu: goto label_24e01c;
        default: break;
    }

    ctx->pc = 0x24dd70u;

    // 0x24dd70: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24dd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24dd74: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24DD74u;
    {
        const bool branch_taken_0x24dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dd74) {
            ctx->pc = 0x24DC50u;
            return;
        }
    }
    ctx->pc = 0x24DD7Cu;
    // 0x24dd7c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dd80: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24dd84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dd84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dd88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dd8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24dd90: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd94: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
    // 0x24dd98: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24dd98u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd9c: 0x0  nop
    ctx->pc = 0x24dd9cu;
    // NOP
    // 0x24dda0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dda4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24dda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24dda8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24dda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddac: 0x0  nop
    ctx->pc = 0x24ddacu;
    // NOP
    // 0x24ddb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24ddb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ddb4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24DDB4u;
    SET_GPR_U32(ctx, 31, 0x24DDBCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24DDB4u, 0x24DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDBCu;
label_24ddbc:
    // 0x24ddbc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24ddc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24ddc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ddc4: 0x0  nop
    ctx->pc = 0x24ddc4u;
    // NOP
    // 0x24ddc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24ddc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ddcc: 0x3c06c4af  lui         $a2, 0xC4AF
    ctx->pc = 0x24ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50351 << 16));
    // 0x24ddd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24ddd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddd4: 0x0  nop
    ctx->pc = 0x24ddd4u;
    // NOP
    // 0x24ddd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ddd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24dddc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24dde0: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x24dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dde8: 0x0  nop
    ctx->pc = 0x24dde8u;
    // NOP
    // 0x24ddec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ddf0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ddf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ddf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ddfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de04: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24de04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de08: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x24de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24de0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24de14: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24de14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de18: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24de18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24de1c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24de1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de20: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24de24: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24de28: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24de2c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x24de2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24de30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de34: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24de38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24de40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de4c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24de4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24de50: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24de54: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24de54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de58: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24de5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24de64: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24de64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24de68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24de6c: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x24de6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24de70: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x24de70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24de74: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x24de74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24de78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24de7c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24de80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24de88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24de8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24de90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24de94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24de98: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24de98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24de9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dea0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dea4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dea8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24deac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24deb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24deb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24deb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24debc: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24debcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24dec0: 0x2404080d  addiu       $a0, $zero, 0x80D
    ctx->pc = 0x24dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x24dec4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24DEC4u;
    SET_GPR_U32(ctx, 31, 0x24DECCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24DEC4u, 0x24DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DECCu;
label_24decc:
    // 0x24decc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24deccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ded0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24DED0u;
    SET_GPR_U32(ctx, 31, 0x24DED8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24DED0u, 0x24DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DED8u;
label_24ded8:
    // 0x24ded8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dedc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24dee0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dee4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dee8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24deec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24def0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24def8: 0x0  nop
    ctx->pc = 0x24def8u;
    // NOP
    // 0x24defc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24defcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24df00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24df04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df08: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24df0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24df10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24df10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24df14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24df18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24df1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24df20: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24df20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24df24: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x24df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x24df28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24df28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24df2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df30: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DF30u;
    SET_GPR_U32(ctx, 31, 0x24DF38u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DF30u, 0x24DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF38u;
label_24df38:
    // 0x24df38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24df38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24df3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DF3Cu;
    SET_GPR_U32(ctx, 31, 0x24DF44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DF3Cu, 0x24DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF44u;
label_24df44:
    // 0x24df44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df48: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24df48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24df4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24df4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24df50: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24df54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24df58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24df5c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24df60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24df60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24df64: 0x0  nop
    ctx->pc = 0x24df64u;
    // NOP
    // 0x24df68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24df68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24df6c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24df70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24df74: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24df78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24df7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24df80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24df84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24df88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24df8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24df8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24df90: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x24df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x24df94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24df94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24df98: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24df9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DF9Cu;
    SET_GPR_U32(ctx, 31, 0x24DFA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DF9Cu, 0x24DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFA4u;
label_24dfa4:
    // 0x24dfa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dfa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dfa8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DFA8u;
    SET_GPR_U32(ctx, 31, 0x24DFB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DFA8u, 0x24DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFB0u;
label_24dfb0:
    // 0x24dfb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dfb4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24dfb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24dfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dfbc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dfc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24dfc4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dfc8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24dfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dfd0: 0x0  nop
    ctx->pc = 0x24dfd0u;
    // NOP
    // 0x24dfd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24dfd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24dfd8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24dfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24dfdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dfe0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dfe4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dfe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24dfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24dfec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dff0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24dff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dff8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24dff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24dffc: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x24e000: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e004: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e008: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E008u;
    SET_GPR_U32(ctx, 31, 0x24E010u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E008u, 0x24E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E010u;
label_24e010:
    // 0x24e010: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e014: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E014u;
    SET_GPR_U32(ctx, 31, 0x24E01Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E014u, 0x24E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E01Cu;
label_24e01c:
    // 0x24e01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e020: 0x0  nop
    ctx->pc = 0x24e020u;
    // NOP
    // 0x24e024: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e028: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24e028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e02c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24E02Cu;
    {
        const bool branch_taken_0x24e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e02c) {
            ctx->pc = 0x24E1E8u;
            return;
        }
    }
    ctx->pc = 0x24E034u;
}
