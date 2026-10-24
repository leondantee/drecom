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

// Function: entry_00226e40
// Address: 0x226e40 - 0x226f08
void entry_00226e40_0x226e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226e40_0x226e40");
#endif

    switch (ctx->pc) {
        case 0x226e6cu: goto label_226e6c;
        case 0x226e88u: goto label_226e88;
        case 0x226ea0u: goto label_226ea0;
        case 0x226eacu: goto label_226eac;
        default: break;
    }

    ctx->pc = 0x226e40u;

    // 0x226e40: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x226e44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226e48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x226e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x226e4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e54: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x226e58: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x226e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226e5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226e60: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226e64: 0xc05c848  jal         func_172120
    ctx->pc = 0x226E64u;
    SET_GPR_U32(ctx, 31, 0x226E6Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x226E64u, 0x226E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E6Cu;
label_226e6c:
    // 0x226e6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x226e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x226e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x226e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226e78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x226e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226e7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226e80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226E80u;
    SET_GPR_U32(ctx, 31, 0x226E88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226E80u, 0x226E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E88u;
label_226e88:
    // 0x226e88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226e90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226e98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x226E98u;
    SET_GPR_U32(ctx, 31, 0x226EA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x226E98u, 0x226EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EA0u;
label_226ea0:
    // 0x226ea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ea4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x226EA4u;
    SET_GPR_U32(ctx, 31, 0x226EACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x226EA4u, 0x226EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226eb0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x226eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x226eb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x226eb8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x226eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x226ebc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x226EBCu;
    {
        const bool branch_taken_0x226ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ebc) {
            ctx->pc = 0x226F08u;
            return;
        }
    }
    ctx->pc = 0x226EC4u;
    // 0x226ec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ec8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x226ecc: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x226ed0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x226ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ed4: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x226ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x226ed8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x226ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x226edc: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x226edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x226ee0: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x226ee4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ee8: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x226ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x226eec: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x226ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ef4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ef8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x226ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x226efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f04: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x226f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x226f08u;
}
