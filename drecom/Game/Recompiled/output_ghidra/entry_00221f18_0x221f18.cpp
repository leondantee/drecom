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

// Function: entry_00221f18
// Address: 0x221f18 - 0x221f4c
void entry_00221f18_0x221f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221f18_0x221f18");
#endif

    ctx->pc = 0x221f18u;

    // 0x221f18: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221f1c: 0xc7c1128c  lwc1        $f1, 0x128C($fp)
    ctx->pc = 0x221f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f20: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x221f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x221f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221f28: 0x0  nop
    ctx->pc = 0x221f28u;
    // NOP
    // 0x221f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x221f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f30: 0x0  nop
    ctx->pc = 0x221f30u;
    // NOP
    // 0x221f34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x221F34u;
    {
        const bool branch_taken_0x221f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221f34) {
            ctx->pc = 0x221F4Cu;
            return;
        }
    }
    ctx->pc = 0x221F3Cu;
    // 0x221f3c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221f40: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x221f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221f44: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x221f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x221f48: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x221f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x221f4cu;
}
