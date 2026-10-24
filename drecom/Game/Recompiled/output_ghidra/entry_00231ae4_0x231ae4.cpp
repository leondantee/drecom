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

// Function: entry_00231ae4
// Address: 0x231ae4 - 0x231b74
void entry_00231ae4_0x231ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231ae4_0x231ae4");
#endif

    switch (ctx->pc) {
        case 0x231af0u: goto label_231af0;
        default: break;
    }

    ctx->pc = 0x231ae4u;

    // 0x231ae4: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231ae8: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x231AE8u;
    SET_GPR_U32(ctx, 31, 0x231AF0u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x231AE8u, 0x231AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF0u;
label_231af0:
    // 0x231af0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x231af0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231af4: 0x7280be28  paddub      $s7, $s4, $zero
    ctx->pc = 0x231af4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x231af8: 0x32f3ffff  andi        $s3, $s7, 0xFFFF
    ctx->pc = 0x231af8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x231afc: 0x16600083  bnez        $s3, . + 4 + (0x83 << 2)
    ctx->pc = 0x231AFCu;
    {
        const bool branch_taken_0x231afc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x231afc) {
            ctx->pc = 0x231D0Cu;
            return;
        }
    }
    ctx->pc = 0x231B04u;
    // 0x231b04: 0xafb10140  sw          $s1, 0x140($sp)
    ctx->pc = 0x231b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 17));
    // 0x231b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b0c: 0x0  nop
    ctx->pc = 0x231b0cu;
    // NOP
    // 0x231b10: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x231b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x231b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b18: 0x0  nop
    ctx->pc = 0x231b18u;
    // NOP
    // 0x231b1c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x231b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x231b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b24: 0x0  nop
    ctx->pc = 0x231b24u;
    // NOP
    // 0x231b28: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x231b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x231b2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x231b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b34: 0x0  nop
    ctx->pc = 0x231b34u;
    // NOP
    // 0x231b38: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x231b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x231b3c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x231b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x231b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b44: 0x0  nop
    ctx->pc = 0x231b44u;
    // NOP
    // 0x231b48: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x231b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x231b4c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231b50: 0xa7b50164  sh          $s5, 0x164($sp)
    ctx->pc = 0x231b50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 21));
    // 0x231b54: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231b58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x231b5c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x231b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x231b60: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x231b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x231b64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231B64u;
    {
        const bool branch_taken_0x231b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b64) {
            ctx->pc = 0x231B74u;
            return;
        }
    }
    ctx->pc = 0x231B6Cu;
    // 0x231b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231b70: 0xa7a20164  sh          $v0, 0x164($sp)
    ctx->pc = 0x231b70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x231b74u;
}
