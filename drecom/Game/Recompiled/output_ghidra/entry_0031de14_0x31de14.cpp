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

// Function: entry_0031de14
// Address: 0x31de14 - 0x31ded0
void entry_0031de14_0x31de14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031de14_0x31de14");
#endif

    switch (ctx->pc) {
        case 0x31de30u: goto label_31de30;
        default: break;
    }

    ctx->pc = 0x31de14u;

    // 0x31de14: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de18: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x31de18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31de1c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de20: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31de24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de28: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31DE28u;
    SET_GPR_U32(ctx, 31, 0x31DE30u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31DE28u, 0x31DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE30u;
label_31de30:
    // 0x31de30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31de30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31de34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31de38: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31de3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31de40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31de44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de48: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de50: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de54: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31de54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de58: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31de60: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de64: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x31de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x31de68: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de6c: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x31de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x31de70: 0x3c04c974  lui         $a0, 0xC974
    ctx->pc = 0x31de70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51572 << 16));
    // 0x31de74: 0x34832400  ori         $v1, $a0, 0x2400
    ctx->pc = 0x31de74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9216);
    // 0x31de78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31de78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31de7c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de80: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x31de84: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31de88: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31de88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31de8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31de8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31de90: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de94: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x31de94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x31de98: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31de98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31de9c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31dea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dea4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dea8: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31dea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x31deac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31deacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31deb0: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31deb4: 0xe4e001a0  swc1        $f0, 0x1A0($a3)
    ctx->pc = 0x31deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 416), bits); }
    // 0x31deb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31deb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31debc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dec0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x31dec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31dec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dec8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31decc: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x31deccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
    ctx->pc = 0x31ded0u;
}
