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

// Function: entry_00303adc
// Address: 0x303adc - 0x303bf8
void entry_00303adc_0x303adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303adc_0x303adc");
#endif

    switch (ctx->pc) {
        case 0x303afcu: goto label_303afc;
        default: break;
    }

    ctx->pc = 0x303adcu;

    // 0x303adc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x303adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303ae0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303ae4: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x303ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x303ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303aec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x303aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303af0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x303af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303af4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x303AF4u;
    SET_GPR_U32(ctx, 31, 0x303AFCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x303AF4u, 0x303AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AFCu;
label_303afc:
    // 0x303afc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b00: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b04: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x303b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x303b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b10: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x303b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x303b14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b20: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x303b24: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x303b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303b2c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x303b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x303b30: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b34: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b38: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x303b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x303b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b44: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x303b48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b54: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x303b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x303b58: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x303b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b5c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x303b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x303b60: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b68: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x303b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x303b6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x303b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x303b78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x303b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x303b80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x303b84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303b90: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x303b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b94: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x303b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x303b98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303b9c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x303b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x303ba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303ba4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x303ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x303ba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303bac: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x303bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x303bb0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303bb4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x303bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x303bb8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x303bbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303bc4: 0x0  nop
    ctx->pc = 0x303bc4u;
    // NOP
    // 0x303bc8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x303bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x303bcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303bd4: 0x0  nop
    ctx->pc = 0x303bd4u;
    // NOP
    // 0x303bd8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x303bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x303bdc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303be0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303be8: 0x0  nop
    ctx->pc = 0x303be8u;
    // NOP
    // 0x303bec: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303bf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303bf4: 0x0  nop
    ctx->pc = 0x303bf4u;
    // NOP
    ctx->pc = 0x303bf8u;
}
