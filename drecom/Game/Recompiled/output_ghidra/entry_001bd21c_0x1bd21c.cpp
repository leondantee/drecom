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

// Function: entry_001bd21c
// Address: 0x1bd21c - 0x1bd280
void entry_001bd21c_0x1bd21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd21c_0x1bd21c");
#endif

    switch (ctx->pc) {
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd270u: goto label_1bd270;
        default: break;
    }

    ctx->pc = 0x1bd21cu;

    // 0x1bd21c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bd220: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd224: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bd224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd228: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd230: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bd230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bd234: 0x24060a49  addiu       $a2, $zero, 0xA49
    ctx->pc = 0x1bd234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2633));
    // 0x1bd238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd240: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD240u;
    SET_GPR_U32(ctx, 31, 0x1BD248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD240u, 0x1BD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD248u;
label_1bd248:
    // 0x1bd248: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd24c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd250: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bd250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd254: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd258: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD258u;
    SET_GPR_U32(ctx, 31, 0x1BD260u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD258u, 0x1BD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD260u;
label_1bd260:
    // 0x1bd260: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bd260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bd264: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd268: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD268u;
    SET_GPR_U32(ctx, 31, 0x1BD270u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD268u, 0x1BD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD270u;
label_1bd270:
    // 0x1bd270: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd274: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bd274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd27c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bd27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bd280u;
}
