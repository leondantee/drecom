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

// Function: entry_0025e780
// Address: 0x25e780 - 0x25e7e4
void entry_0025e780_0x25e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e780_0x25e780");
#endif

    ctx->pc = 0x25e780u;

    // 0x25e780: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e784: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e788: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25e78c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25e790: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e798: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e79c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25e79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25e7a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e7a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e7a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7ac: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25e7b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e7b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7b8: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x25e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x25e7bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e7c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7c8: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x25e7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x25e7cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e7d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e7d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7d8: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25e7dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E7DCu;
    {
        const bool branch_taken_0x25e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e7dc) {
            ctx->pc = 0x25E80Cu;
            return;
        }
    }
    ctx->pc = 0x25E7E4u;
}
