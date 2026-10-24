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

// Function: entry_001ff09c
// Address: 0x1ff09c - 0x1ff12c
void entry_001ff09c_0x1ff09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff09c_0x1ff09c");
#endif

    switch (ctx->pc) {
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff100u: goto label_1ff100;
        default: break;
    }

    ctx->pc = 0x1ff09cu;

    // 0x1ff09c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0a0: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1ff0a4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1ff0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ff0a8: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x1ff0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ff0ac: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FF0ACu;
    {
        const bool branch_taken_0x1ff0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0ac) {
            ctx->pc = 0x1FF12Cu;
            return;
        }
    }
    ctx->pc = 0x1FF0B4u;
    // 0x1ff0b4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0b8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0bc: 0x24a403c0  addiu       $a0, $a1, 0x3C0
    ctx->pc = 0x1ff0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1ff0c0: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x1ff0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1ff0c4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF0C4u;
    SET_GPR_U32(ctx, 31, 0x1FF0CCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF0CCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF0CCu) { return; }
    ctx->pc = 0x1FF0CCu;
label_1ff0cc:
    // 0x1ff0cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff0ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff0d0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0d4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff0d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff0dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ff0e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff0e8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0f0: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1ff0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1ff0f4: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff0f8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF0F8u;
    SET_GPR_U32(ctx, 31, 0x1FF100u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF100u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF100u) { return; }
    ctx->pc = 0x1FF100u;
label_1ff100:
    // 0x1ff100: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ff100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff10c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff110: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff114: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ff114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff118: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ff11c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff124: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ff124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ff128: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ff12cu;
}
