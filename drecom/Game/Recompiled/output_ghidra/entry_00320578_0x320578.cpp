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

// Function: entry_00320578
// Address: 0x320578 - 0x3205e0
void entry_00320578_0x320578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320578_0x320578");
#endif

    switch (ctx->pc) {
        case 0x3205a8u: goto label_3205a8;
        case 0x3205c8u: goto label_3205c8;
        default: break;
    }

    ctx->pc = 0x320578u;

    // 0x320578: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32057c: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x32057cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x320580: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x320580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x320584: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x320584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x320588: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x320588u;
    {
        const bool branch_taken_0x320588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x320588) {
            ctx->pc = 0x3205E0u;
            return;
        }
    }
    ctx->pc = 0x320590u;
    // 0x320590: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320594: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320598: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x32059c: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x3205a0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3205A0u;
    SET_GPR_U32(ctx, 31, 0x3205A8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3205A8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3205A8u) { return; }
    ctx->pc = 0x3205A8u;
label_3205a8:
    // 0x3205a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3205a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3205ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3205acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3205b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b8: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x3205b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x3205bc: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3205c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3205C0u;
    SET_GPR_U32(ctx, 31, 0x3205C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3205C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3205C8u) { return; }
    ctx->pc = 0x3205C8u;
label_3205c8:
    // 0x3205c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3205c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3205cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3205d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3205d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3205d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205d8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3205d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3205dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3205dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3205e0u;
}
