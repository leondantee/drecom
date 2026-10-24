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

// Function: entry_0012b1e8
// Address: 0x12b1e8 - 0x12b21c
void entry_0012b1e8_0x12b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1e8_0x12b1e8");
#endif

    ctx->pc = 0x12b1e8u;

    // 0x12b1e8: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b1ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12B1ECu;
    {
        const bool branch_taken_0x12b1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1ec) {
            ctx->pc = 0x12B21Cu;
            return;
        }
    }
    ctx->pc = 0x12B1F4u;
    // 0x12b1f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12b1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b1fc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x12b200: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12b204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b208: 0x0  nop
    ctx->pc = 0x12b208u;
    // NOP
    // 0x12b20c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b210: 0x0  nop
    ctx->pc = 0x12b210u;
    // NOP
    // 0x12b214: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x12B214u;
    {
        const bool branch_taken_0x12b214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b214) {
            ctx->pc = 0x12B258u;
            return;
        }
    }
    ctx->pc = 0x12B21Cu;
}
