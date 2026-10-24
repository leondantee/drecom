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

// Function: entry_0025d270
// Address: 0x25d270 - 0x25d2d4
void entry_0025d270_0x25d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d270_0x25d270");
#endif

    ctx->pc = 0x25d270u;

    // 0x25d270: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d278: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25d27c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25d280: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d284: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d28c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25d28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25d290: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d294: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d29c: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25d2a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2a8: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x25d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x25d2ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d2b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2b8: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x25d2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x25d2bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d2c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d2c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2c8: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25d2cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25D2CCu;
    {
        const bool branch_taken_0x25d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2cc) {
            ctx->pc = 0x25D2FCu;
            return;
        }
    }
    ctx->pc = 0x25D2D4u;
}
