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

// Function: entry_002d77d4
// Address: 0x2d77d4 - 0x2d7814
void entry_002d77d4_0x2d77d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d77d4_0x2d77d4");
#endif

    ctx->pc = 0x2d77d4u;

    // 0x2d77d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d77d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d77dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d77e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d77e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d77e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D77E4u;
    {
        const bool branch_taken_0x2d77e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d77e4) {
            ctx->pc = 0x2D7814u;
            return;
        }
    }
    ctx->pc = 0x2D77ECu;
    // 0x2d77ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77f0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d77f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d77f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d77f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77fc: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7800: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d7804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d7808: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d780c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D780Cu;
    {
        const bool branch_taken_0x2d780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d780c) {
            ctx->pc = 0x2D7834u;
            return;
        }
    }
    ctx->pc = 0x2D7814u;
}
