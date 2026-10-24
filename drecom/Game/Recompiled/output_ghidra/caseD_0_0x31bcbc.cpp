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
// Address: 0x31bcbc - 0x31bde8
void caseD_0_0x31bcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x31bcbc");
#endif

    switch (ctx->pc) {
        case 0x31bd68u: goto label_31bd68;
        default: break;
    }

    ctx->pc = 0x31bcbcu;

    // 0x31bcbc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcc0: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
    // 0x31bcc4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcc8: 0xace012b0  sw          $zero, 0x12B0($a3)
    ctx->pc = 0x31bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4784), GPR_U32(ctx, 0));
    // 0x31bccc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcd0: 0xac8012b4  sw          $zero, 0x12B4($a0)
    ctx->pc = 0x31bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4788), GPR_U32(ctx, 0));
    // 0x31bcd4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31bcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcd8: 0xacc012b8  sw          $zero, 0x12B8($a2)
    ctx->pc = 0x31bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4792), GPR_U32(ctx, 0));
    // 0x31bcdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31bcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bce0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bce4: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
    // 0x31bce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31bce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bcec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcf0: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
    // 0x31bcf4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bcf8: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x31bcfc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x31bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x31bd00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31bd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31bd04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bd08: 0xac431330  sw          $v1, 0x1330($v0)
    ctx->pc = 0x31bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 3));
    // 0x31bd0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bd10: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31bd14: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x31bd14u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31bd18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31bd1c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x31bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x31bd20: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31bd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bd24: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x31bd28: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31bd28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31bd2c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31bd30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31bd34: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31bd38: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
    // 0x31bd3c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x31bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x31bd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bd44: 0x0  nop
    ctx->pc = 0x31bd44u;
    // NOP
    // 0x31bd48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31bd48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31bd4c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31bd50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31bd54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31bd58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31bd5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31bd5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31bd60: 0xc059e1c  jal         func_167870
    ctx->pc = 0x31BD60u;
    SET_GPR_U32(ctx, 31, 0x31BD68u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x31BD60u, 0x31BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD68u;
label_31bd68:
    // 0x31bd68: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x31bd68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bd6c: 0x166000da  bnez        $s3, . + 4 + (0xDA << 2)
    ctx->pc = 0x31BD6Cu;
    {
        const bool branch_taken_0x31bd6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd6c) {
            ctx->pc = 0x31C0D8u;
            return;
        }
    }
    ctx->pc = 0x31BD74u;
    // 0x31bd74: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bd78: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x31bd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31bd7c: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x31bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x31bd80: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x31bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x31bd84: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31bd88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31bd8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bd90: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bd94: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31bd98: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31bd9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31bda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bda4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bda8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31bdac: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x31bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x31bdb0: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x31bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x31bdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bdb8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bdbc: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31bdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x31bdc0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bdc4: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x31bdc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31bdc8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x31bdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x31bdcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bdd0: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x31BDD0u;
    {
        const bool branch_taken_0x31bdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31bdd0) {
            ctx->pc = 0x31BF34u;
            return;
        }
    }
    ctx->pc = 0x31BDD8u;
    // 0x31bdd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BDD8u;
    {
        const bool branch_taken_0x31bdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bdd8) {
            ctx->pc = 0x31BDE8u;
            return;
        }
    }
    ctx->pc = 0x31BDE0u;
    // 0x31bde0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x31BDE0u;
    {
        const bool branch_taken_0x31bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bde0) {
            ctx->pc = 0x31C080u;
            return;
        }
    }
    ctx->pc = 0x31BDE8u;
}
