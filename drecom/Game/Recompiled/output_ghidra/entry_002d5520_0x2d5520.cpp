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

// Function: entry_002d5520
// Address: 0x2d5520 - 0x2d559c
void entry_002d5520_0x2d5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5520_0x2d5520");
#endif

    switch (ctx->pc) {
        case 0x2d555cu: goto label_2d555c;
        default: break;
    }

    ctx->pc = 0x2d5520u;

    // 0x2d5520: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5524: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d552c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5534: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d5534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d5538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d553c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5544: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d5548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d554c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d5550: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5554: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5554u;
    SET_GPR_U32(ctx, 31, 0x2D555Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5554u, 0x2D555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D555Cu;
label_2d555c:
    // 0x2d555c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5560: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d5564: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5564u;
    {
        const bool branch_taken_0x2d5564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5564) {
            ctx->pc = 0x2D559Cu;
            return;
        }
    }
    ctx->pc = 0x2D556Cu;
    // 0x2d556c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5574: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d557c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5580: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5588: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d558c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5590: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5598: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d559cu;
}
