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

// Function: entry_0023db74
// Address: 0x23db74 - 0x23dc44
void entry_0023db74_0x23db74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023db74_0x23db74");
#endif

    switch (ctx->pc) {
        case 0x23db94u: goto label_23db94;
        default: break;
    }

    ctx->pc = 0x23db74u;

    // 0x23db74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db78: 0x36060400  ori         $a2, $s0, 0x400
    ctx->pc = 0x23db78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
    // 0x23db7c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23db84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23db8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23DB8Cu;
    SET_GPR_U32(ctx, 31, 0x23DB94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23DB8Cu, 0x23DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23db94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23db98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dba0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23dba4: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x23dba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbb0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbb4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23dbb8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23dbbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23dbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbc4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbcc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23dbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23dbd0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x23dbd4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x23dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x23dbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbe0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbe4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23dbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23dbe8: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23dbec: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23dbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbf8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbfc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23dbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23dc00: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x23dc04: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23dc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dc14: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23dc18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc1c: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x23dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23dc20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc24: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dc28: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23dc2c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23dc30: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23dc34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x23dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x23dc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc40: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x23dc44u;
}
