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

// Function: entry_0012b6f4
// Address: 0x12b6f4 - 0x12b728
void entry_0012b6f4_0x12b6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b6f4_0x12b6f4");
#endif

    ctx->pc = 0x12b6f4u;

    // 0x12b6f4: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b6f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B728u;
            return;
        }
    }
    ctx->pc = 0x12B700u;
    // 0x12b700: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b704: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b708: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x12b70c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12b70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12b710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b714: 0x0  nop
    ctx->pc = 0x12b714u;
    // NOP
    // 0x12b718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b71c: 0x0  nop
    ctx->pc = 0x12b71cu;
    // NOP
    // 0x12b720: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x12B720u;
    {
        const bool branch_taken_0x12b720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b720) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B728u;
}
