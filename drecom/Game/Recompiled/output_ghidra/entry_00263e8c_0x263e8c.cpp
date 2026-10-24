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

// Function: entry_00263e8c
// Address: 0x263e8c - 0x263f38
void entry_00263e8c_0x263e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263e8c_0x263e8c");
#endif

    ctx->pc = 0x263e8cu;

    // 0x263e8c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e90: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x263e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x263e94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x263e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x263e98: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263e9c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x263e9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263ea0: 0x32c3003f  andi        $v1, $s6, 0x3F
    ctx->pc = 0x263ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x263ea4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263ea8: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x263ea8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263eac: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x263eacu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x263eb0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263eb4: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x263eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x263eb8: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x263ebc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263ec4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263ec8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263ecc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x263eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263ed0: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x263ed0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263ed4: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x263ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
    // 0x263ed8: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x263ED8u;
    {
        const bool branch_taken_0x263ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ed8) {
            ctx->pc = 0x263FE8u;
            return;
        }
    }
    ctx->pc = 0x263EE0u;
    // 0x263ee0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263ee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263ee4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263ee8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x263ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x263eec: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x263EECu;
    {
        const bool branch_taken_0x263eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263eec) {
            ctx->pc = 0x263F38u;
            return;
        }
    }
    ctx->pc = 0x263EF4u;
    // 0x263ef4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263ef8: 0x94631080  lhu         $v1, 0x1080($v1)
    ctx->pc = 0x263ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4224)));
    // 0x263efc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f00: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263f04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x263F04u;
    {
        const bool branch_taken_0x263f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f04) {
            ctx->pc = 0x263F38u;
            return;
        }
    }
    ctx->pc = 0x263F0Cu;
    // 0x263f0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x263f10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263f14: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x263f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263f18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263f1c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x263f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x263f20: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x263f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263f28: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x263f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263f30: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x263f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x263f34: 0x0  nop
    ctx->pc = 0x263f34u;
    // NOP
    ctx->pc = 0x263f38u;
}
