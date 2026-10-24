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

// Function: entry_00271594
// Address: 0x271594 - 0x2715d8
void entry_00271594_0x271594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271594_0x271594");
#endif

    ctx->pc = 0x271594u;

    // 0x271594: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271598: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x271598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x27159c: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x27159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x2715a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2715a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2715a4: 0x0  nop
    ctx->pc = 0x2715a4u;
    // NOP
    // 0x2715a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2715a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2715ac: 0x0  nop
    ctx->pc = 0x2715acu;
    // NOP
    // 0x2715b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2715B0u;
    {
        const bool branch_taken_0x2715b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2715b0) {
            ctx->pc = 0x2715D8u;
            return;
        }
    }
    ctx->pc = 0x2715B8u;
    // 0x2715b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2715b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2715bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2715c0: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x2715c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x2715c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2715c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2715cc: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x2715ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x2715d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2715D0u;
    {
        const bool branch_taken_0x2715d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715d0) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x2715D8u;
}
