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

// Function: entry_00228eac
// Address: 0x228eac - 0x228f6c
void entry_00228eac_0x228eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228eac_0x228eac");
#endif

    switch (ctx->pc) {
        case 0x228f18u: goto label_228f18;
        case 0x228f30u: goto label_228f30;
        case 0x228f64u: goto label_228f64;
        default: break;
    }

    ctx->pc = 0x228eacu;

    // 0x228eac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x228eb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228eb4: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x228eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x228eb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ebc: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x228ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x228ec0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228ec4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228ec8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x228ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x228ecc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x228ECCu;
    {
        const bool branch_taken_0x228ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228ecc) {
            ctx->pc = 0x228F90u;
            return;
        }
    }
    ctx->pc = 0x228ED4u;
    // 0x228ed4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ed8: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x228ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228edc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x228edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x228ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ee4: 0x0  nop
    ctx->pc = 0x228ee4u;
    // NOP
    // 0x228ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228eec: 0x0  nop
    ctx->pc = 0x228eecu;
    // NOP
    // 0x228ef0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x228EF0u;
    {
        const bool branch_taken_0x228ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228ef0) {
            ctx->pc = 0x228F90u;
            return;
        }
    }
    ctx->pc = 0x228EF8u;
    // 0x228ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228efc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x228f04: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x228f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x228f08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228f0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228f10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228F10u;
    SET_GPR_U32(ctx, 31, 0x228F18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228F10u, 0x228F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F18u;
label_228f18:
    // 0x228f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f1c: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x228f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228f20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x228f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x228f24: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x228f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x228f28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228F28u;
    SET_GPR_U32(ctx, 31, 0x228F30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228F28u, 0x228F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F30u;
label_228f30:
    // 0x228f30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x228f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228f34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228f38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228F38u;
    {
        const bool branch_taken_0x228f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f38) {
            ctx->pc = 0x228F6Cu;
            return;
        }
    }
    ctx->pc = 0x228F40u;
    // 0x228f40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f44: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x228f48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x228f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x228f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228f50: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x228f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x228f54: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x228f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x228f58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228f5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228F5Cu;
    SET_GPR_U32(ctx, 31, 0x228F64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228F5Cu, 0x228F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F64u;
label_228f64:
    // 0x228f64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228F64u;
    {
        const bool branch_taken_0x228f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f64) {
            ctx->pc = 0x228F90u;
            return;
        }
    }
    ctx->pc = 0x228F6Cu;
}
