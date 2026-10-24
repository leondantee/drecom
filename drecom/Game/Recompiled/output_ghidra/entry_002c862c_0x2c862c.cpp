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

// Function: entry_002c862c
// Address: 0x2c862c - 0x2c8750
void entry_002c862c_0x2c862c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c862c_0x2c862c");
#endif

    switch (ctx->pc) {
        case 0x2c8658u: goto label_2c8658;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8748u: goto label_2c8748;
        default: break;
    }

    ctx->pc = 0x2c862cu;

    // 0x2c862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8630: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8634: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c8634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c863c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8644: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c8644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c8648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c864c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c864cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8650: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8650u;
    SET_GPR_U32(ctx, 31, 0x2C8658u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8650u, 0x2C8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8658u;
label_2c8658:
    // 0x2c8658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C8658u;
    SET_GPR_U32(ctx, 31, 0x2C8660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C8658u, 0x2C8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8660u;
label_2c8660:
    // 0x2c8660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c8660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c8664: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c8668: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2c8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2c866c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8670: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8678: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c867c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C867Cu;
    SET_GPR_U32(ctx, 31, 0x2C8684u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C867Cu, 0x2C8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8684u;
label_2c8684:
    // 0x2c8684: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c8688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c868c: 0x0  nop
    ctx->pc = 0x2c868cu;
    // NOP
    // 0x2c8690: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c8690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8694: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c8694u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c8698: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2c869c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c869cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c86a0: 0x0  nop
    ctx->pc = 0x2c86a0u;
    // NOP
    // 0x2c86a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c86a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c86a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86b0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c86b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c86b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c86b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c86bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c86bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c86c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86c8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c86c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c86cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c86d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c86dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c86dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c86e0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c86e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c86e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86ec: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c86ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c86f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c86f4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c86f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c86f8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c86f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c86fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C86FCu;
    {
        const bool branch_taken_0x2c86fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86fc) {
            ctx->pc = 0x2C8750u;
            return;
        }
    }
    ctx->pc = 0x2C8704u;
    // 0x2c8704: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C8704u;
    SET_GPR_U32(ctx, 31, 0x2C870Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C8704u, 0x2C870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C870Cu;
label_2c870c:
    // 0x2c870c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8714: 0x0  nop
    ctx->pc = 0x2c8714u;
    // NOP
    // 0x2c8718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c871c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8724: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c8728: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c872c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8730: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8734: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c8734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c8738: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c873c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8740: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8740u;
    SET_GPR_U32(ctx, 31, 0x2C8748u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8740u, 0x2C8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8748u;
label_2c8748:
    // 0x2c8748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8748u;
    {
        const bool branch_taken_0x2c8748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8748) {
            ctx->pc = 0x2C8770u;
            return;
        }
    }
    ctx->pc = 0x2C8750u;
}
