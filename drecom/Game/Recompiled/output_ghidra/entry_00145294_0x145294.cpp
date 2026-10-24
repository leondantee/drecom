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

// Function: entry_00145294
// Address: 0x145294 - 0x1452e0
void entry_00145294_0x145294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145294_0x145294");
#endif

    ctx->pc = 0x145294u;

    // 0x145294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145298: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14529c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1452a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1452a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1452a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1452acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1452b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1452bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1452bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1452c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1452C0u;
    {
        const bool branch_taken_0x1452c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452c0) {
            ctx->pc = 0x1452E0u;
            return;
        }
    }
    ctx->pc = 0x1452C8u;
    // 0x1452c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452cc: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1452ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1452d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1452d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1452d8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1452d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1452dc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1452e0u;
}
