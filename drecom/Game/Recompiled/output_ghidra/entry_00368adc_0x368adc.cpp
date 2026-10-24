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

// Function: entry_00368adc
// Address: 0x368adc - 0x368b44
void entry_00368adc_0x368adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368adc_0x368adc");
#endif

    switch (ctx->pc) {
        case 0x368afcu: goto label_368afc;
        default: break;
    }

    ctx->pc = 0x368adcu;

    // 0x368adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368ae0: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x368ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x368ae4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x368ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x368ae8: 0xa0620010  sb          $v0, 0x10($v1)
    ctx->pc = 0x368ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x368aec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x368aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368af0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368af0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x368af4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x368AF4u;
    SET_GPR_U32(ctx, 31, 0x368AFCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x368AF4u, 0x368AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AFCu;
label_368afc:
    // 0x368afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368b00: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x368b00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x368b04: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x368b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x368b08: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x368b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x368b0c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x368b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x368b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b14: 0x0  nop
    ctx->pc = 0x368b14u;
    // NOP
    // 0x368b18: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b20: 0x0  nop
    ctx->pc = 0x368b20u;
    // NOP
    // 0x368b24: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x368b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x368b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b2c: 0x0  nop
    ctx->pc = 0x368b2cu;
    // NOP
    // 0x368b30: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x368b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x368b34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x368b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b38: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368b3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368b40: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x368b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x368b44u;
}
