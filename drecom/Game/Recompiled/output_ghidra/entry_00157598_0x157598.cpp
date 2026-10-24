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

// Function: entry_00157598
// Address: 0x157598 - 0x1575e4
void entry_00157598_0x157598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157598_0x157598");
#endif

    ctx->pc = 0x157598u;

    // 0x157598: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x157598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x15759c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15759cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1575a0: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1575a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1575a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1575a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1575a8: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x1575a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1575ac: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1575acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1575b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1575b4: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x1575b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x1575b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1575bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1575bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575c0: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x1575c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1575c4: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1575c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1575c8: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1575c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1575cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1575ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1575d0: 0x0  nop
    ctx->pc = 0x1575d0u;
    // NOP
    // 0x1575d4: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1575d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x1575d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1575d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1575dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1575DCu;
    {
        const bool branch_taken_0x1575dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575dc) {
            ctx->pc = 0x1576C8u;
            return;
        }
    }
    ctx->pc = 0x1575E4u;
}
