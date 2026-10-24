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

// Function: entry_001c122c
// Address: 0x1c122c - 0x1c1284
void entry_001c122c_0x1c122c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c122c_0x1c122c");
#endif

    switch (ctx->pc) {
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1274u: goto label_1c1274;
        default: break;
    }

    ctx->pc = 0x1c122cu;

    // 0x1c122c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1230: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c1230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c1234: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1238: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c123c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1c123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c1240: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c1244: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1244u;
    SET_GPR_U32(ctx, 31, 0x1C124Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1244u, 0x1C124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C124Cu;
label_1c124c:
    // 0x1c124c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1254: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c1254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1258: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c125c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C125Cu;
    SET_GPR_U32(ctx, 31, 0x1C1264u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C125Cu, 0x1C1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1264u;
label_1c1264:
    // 0x1c1264: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c1264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c1268: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c126c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C126Cu;
    SET_GPR_U32(ctx, 31, 0x1C1274u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C126Cu, 0x1C1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1274u;
label_1c1274:
    // 0x1c1274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c1278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c127c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c1280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c1284u;
}
