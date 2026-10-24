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

// Function: entry_002d66e8
// Address: 0x2d66e8 - 0x2d6728
void entry_002d66e8_0x2d66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d66e8_0x2d66e8");
#endif

    ctx->pc = 0x2d66e8u;

    // 0x2d66e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66ec: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d66ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d66f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d66f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d66f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d66f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D66F8u;
    {
        const bool branch_taken_0x2d66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66f8) {
            ctx->pc = 0x2D6728u;
            return;
        }
    }
    ctx->pc = 0x2D6700u;
    // 0x2d6700: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6704: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6708: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d670c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6710: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d671c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6720u;
    {
        const bool branch_taken_0x2d6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6720) {
            ctx->pc = 0x2D6748u;
            return;
        }
    }
    ctx->pc = 0x2D6728u;
}
