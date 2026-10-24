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

// Function: entry_0025c998
// Address: 0x25c998 - 0x25ca40
void entry_0025c998_0x25c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c998_0x25c998");
#endif

    ctx->pc = 0x25c998u;

    // 0x25c998: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c99c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x25c9a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25c9a4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x25c9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c9a8: 0x30b600ff  andi        $s6, $a1, 0xFF
    ctx->pc = 0x25c9a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25c9ac: 0x32c3003f  andi        $v1, $s6, 0x3F
    ctx->pc = 0x25c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25c9b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25c9b4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c9b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25c9b8: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x25c9b8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25c9bc: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c9c0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c9c4: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25c9c8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c9d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25c9d4: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x25c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x25c9d8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25c9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c9dc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c9dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c9e0: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x25c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
    // 0x25c9e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x25C9E4u;
    {
        const bool branch_taken_0x25c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c9e4) {
            ctx->pc = 0x25CB08u;
            return;
        }
    }
    ctx->pc = 0x25C9ECu;
    // 0x25c9ec: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c9ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25c9f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c9f4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25c9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25c9f8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25C9F8u;
    {
        const bool branch_taken_0x25c9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c9f8) {
            ctx->pc = 0x25CA40u;
            return;
        }
    }
    ctx->pc = 0x25CA00u;
    // 0x25ca00: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ca04: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x25ca04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x25ca08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25ca08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ca0c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25ca0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25ca10: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x25CA10u;
    {
        const bool branch_taken_0x25ca10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca10) {
            ctx->pc = 0x25CA40u;
            return;
        }
    }
    ctx->pc = 0x25CA18u;
    // 0x25ca18: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25ca1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ca1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ca20: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ca24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ca24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25ca28: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25ca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25ca2c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x25ca30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25ca30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ca34: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ca38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ca38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25ca3c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25ca3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x25ca40u;
}
