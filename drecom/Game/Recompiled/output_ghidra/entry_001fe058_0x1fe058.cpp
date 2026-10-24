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

// Function: entry_001fe058
// Address: 0x1fe058 - 0x1fe0e0
void entry_001fe058_0x1fe058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe058_0x1fe058");
#endif

    switch (ctx->pc) {
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0c0u: goto label_1fe0c0;
        default: break;
    }

    ctx->pc = 0x1fe058u;

    // 0x1fe058: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe05c: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fe05cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fe060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe064: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1fe064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1fe068: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FE068u;
    {
        const bool branch_taken_0x1fe068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe068) {
            ctx->pc = 0x1FE0E0u;
            return;
        }
    }
    ctx->pc = 0x1FE070u;
    // 0x1fe070: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe074: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1fe074u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fe078: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1fe078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fe07c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fe080: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FE080u;
    {
        const bool branch_taken_0x1fe080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe080) {
            ctx->pc = 0x1FE14Cu;
            return;
        }
    }
    ctx->pc = 0x1FE088u;
    // 0x1fe088: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe08c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe090: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1fe094: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1fe098: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FE098u;
    SET_GPR_U32(ctx, 31, 0x1FE0A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FE0A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE0A0u) { return; }
    ctx->pc = 0x1FE0A0u;
label_1fe0a0:
    // 0x1fe0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe0a4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0b0: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x1fe0b4: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe0b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FE0B8u;
    SET_GPR_U32(ctx, 31, 0x1FE0C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FE0C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE0C0u) { return; }
    ctx->pc = 0x1FE0C0u;
label_1fe0c0:
    // 0x1fe0c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1fe0c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fe0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe0cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0d0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fe0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fe0d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fe0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe0d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FE0D8u;
    {
        const bool branch_taken_0x1fe0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0d8) {
            ctx->pc = 0x1FE14Cu;
            return;
        }
    }
    ctx->pc = 0x1FE0E0u;
}
