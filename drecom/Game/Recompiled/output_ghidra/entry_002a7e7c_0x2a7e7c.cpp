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

// Function: entry_002a7e7c
// Address: 0x2a7e7c - 0x2a7f40
void entry_002a7e7c_0x2a7e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7e7c_0x2a7e7c");
#endif

    switch (ctx->pc) {
        case 0x2a7eb8u: goto label_2a7eb8;
        case 0x2a7ed4u: goto label_2a7ed4;
        case 0x2a7eecu: goto label_2a7eec;
        case 0x2a7f24u: goto label_2a7f24;
        default: break;
    }

    ctx->pc = 0x2a7e7cu;

    // 0x2a7e7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7e80: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e84: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x2a7e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a7e88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e8c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e90: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7e94: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a7e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a7e98: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a7e98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7e9c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a7ea0: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7ea4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2a7ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2a7ea8: 0x24a6dce0  addiu       $a2, $a1, -0x2320
    ctx->pc = 0x2a7ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x2a7eac: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7eacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7eb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A7EB0u;
    SET_GPR_U32(ctx, 31, 0x2A7EB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A7EB0u, 0x2A7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EB8u;
label_2a7eb8:
    // 0x2a7eb8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a7ebc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ec0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7ec4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a7ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7ecc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A7ECCu;
    SET_GPR_U32(ctx, 31, 0x2A7ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A7ECCu, 0x2A7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7ED4u;
label_2a7ed4:
    // 0x2a7ed4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ed8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a7edc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ee0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7ee4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7EE4u;
    SET_GPR_U32(ctx, 31, 0x2A7EECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7EE4u, 0x2A7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EECu;
label_2a7eec:
    // 0x2a7eec: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ef0: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x2a7ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a7ef4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a7ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7ef8: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a7ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a7efc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7EFCu;
    {
        const bool branch_taken_0x2a7efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7efc) {
            ctx->pc = 0x2A7F40u;
            return;
        }
    }
    ctx->pc = 0x2A7F04u;
    // 0x2a7f04: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f08: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f10: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a7f14: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a7f18: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a7f1c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F24u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7F1Cu, 0x2A7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F24u;
label_2a7f24:
    // 0x2a7f24: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f28: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7f2c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a7f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7f34: 0x0  nop
    ctx->pc = 0x2a7f34u;
    // NOP
    // 0x2a7f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7f3c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a7f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x2a7f40u;
}
