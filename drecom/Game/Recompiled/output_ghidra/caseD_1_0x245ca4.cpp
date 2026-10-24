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

// Function: caseD_1
// Address: 0x245ca4 - 0x245d64
void caseD_1_0x245ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x245ca4");
#endif

    switch (ctx->pc) {
        case 0x245cd0u: goto label_245cd0;
        case 0x245cecu: goto label_245cec;
        case 0x245d04u: goto label_245d04;
        case 0x245d14u: goto label_245d14;
        default: break;
    }

    ctx->pc = 0x245ca4u;

    // 0x245ca4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x245ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x245ca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x245cac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x245cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x245cb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245cb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245cb8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x245cbc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x245cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245cc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x245cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x245cc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x245cc8: 0xc05c848  jal         func_172120
    ctx->pc = 0x245CC8u;
    SET_GPR_U32(ctx, 31, 0x245CD0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245CC8u, 0x245CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CD0u;
label_245cd0:
    // 0x245cd0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x245cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x245cd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245cd8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245cdc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x245cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245ce0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245ce0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245ce4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x245CE4u;
    SET_GPR_U32(ctx, 31, 0x245CECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245CE4u, 0x245CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CECu;
label_245cec:
    // 0x245cec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245cf0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x245cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x245cf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245cf8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x245cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x245cfc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x245CFCu;
    SET_GPR_U32(ctx, 31, 0x245D04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x245CFCu, 0x245D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D04u;
label_245d04:
    // 0x245d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x245d08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x245D0Cu;
    SET_GPR_U32(ctx, 31, 0x245D14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x245D0Cu, 0x245D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D14u;
label_245d14:
    // 0x245d14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245d14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x245d18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d1c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x245d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x245d20: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x245d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x245d24: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x245d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x245d28: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x245D28u;
    {
        const bool branch_taken_0x245d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d28) {
            ctx->pc = 0x245D64u;
            return;
        }
    }
    ctx->pc = 0x245D30u;
    // 0x245d30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d34: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x245d38: 0x24710fa0  addiu       $s1, $v1, 0xFA0
    ctx->pc = 0x245d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x245d3c: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x245d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x245d40: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x245d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x245d44: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x245d48: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x245d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x245d4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d50: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x245d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245d54: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x245d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x245d58: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x245d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x245d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x245d60: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x245d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x245d64u;
}
