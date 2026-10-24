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

// Function: entry_00271618
// Address: 0x271618 - 0x271650
void entry_00271618_0x271618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271618_0x271618");
#endif

    ctx->pc = 0x271618u;

    // 0x271618: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27161c: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x27161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x271620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271624: 0x0  nop
    ctx->pc = 0x271624u;
    // NOP
    // 0x271628: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27162c: 0x0  nop
    ctx->pc = 0x27162cu;
    // NOP
    // 0x271630: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x271630u;
    {
        const bool branch_taken_0x271630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271630) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x271638u;
    // 0x271638: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27163c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271640: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x271640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27164c: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x27164cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    ctx->pc = 0x271650u;
}
