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

// Function: caseD_2
// Address: 0x2dec0c - 0x2dec70
void caseD_2_0x2dec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2dec0c");
#endif

    switch (ctx->pc) {
        case 0x2dec2cu: goto label_2dec2c;
        default: break;
    }

    ctx->pc = 0x2dec0cu;

    // 0x2dec0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dec18: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2dec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2dec1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dec20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dec20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dec24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DEC24u;
    SET_GPR_U32(ctx, 31, 0x2DEC2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEC24u, 0x2DEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC2Cu;
label_2dec2c:
    // 0x2dec2c: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x2dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
    // 0x2dec30: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2dec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2dec34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dec34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dec38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec3c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2dec40: 0x3c024106  lui         $v0, 0x4106
    ctx->pc = 0x2dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16646 << 16));
    // 0x2dec44: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2dec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2dec48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dec48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dec4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec50: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2dec54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dec58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec5c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dec5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dec60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dec64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dec68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dec6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dec6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dec70u;
}
