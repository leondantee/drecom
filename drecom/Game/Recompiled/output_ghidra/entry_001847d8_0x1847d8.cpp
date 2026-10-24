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

// Function: entry_001847d8
// Address: 0x1847d8 - 0x184814
void entry_001847d8_0x1847d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001847d8_0x1847d8");
#endif

    ctx->pc = 0x1847d8u;

    // 0x1847d8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1847d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1847dc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1847e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1847e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1847e4: 0x0  nop
    ctx->pc = 0x1847e4u;
    // NOP
    // 0x1847e8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1847E8u;
    {
        const bool branch_taken_0x1847e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1847e8) {
            ctx->pc = 0x184814u;
            return;
        }
    }
    ctx->pc = 0x1847F0u;
    // 0x1847f0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1847f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1847f8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1847fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1847FCu;
    {
        const bool branch_taken_0x1847fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1847fc) {
            ctx->pc = 0x184814u;
            return;
        }
    }
    ctx->pc = 0x184804u;
    // 0x184804: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184808: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x184808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x18480c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184810: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x184810u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x184814u;
}
