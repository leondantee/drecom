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

// Function: entry_0034a030
// Address: 0x34a030 - 0x34a0d0
void entry_0034a030_0x34a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a030_0x34a030");
#endif

    switch (ctx->pc) {
        case 0x34a06cu: goto label_34a06c;
        case 0x34a0b0u: goto label_34a0b0;
        default: break;
    }

    ctx->pc = 0x34a030u;

    // 0x34a030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a034: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a038: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34a03c: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x34a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x34a040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34a044: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34a044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34a048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a04c: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x34a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x34a050: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x34a050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x34a054: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a058: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34a05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34a060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34A064u;
    SET_GPR_U32(ctx, 31, 0x34A06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34A064u, 0x34A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A06Cu;
label_34a06c:
    // 0x34a06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a070: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a074: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34a078: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a07c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34a080: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a084: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a088: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34a088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a08c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a090: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34a094: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34a094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34a098: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34a09c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a0a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a0a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34a0a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A0A8u;
    SET_GPR_U32(ctx, 31, 0x34A0B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A0A8u, 0x34A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0B0u;
label_34a0b0:
    // 0x34a0b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a0b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x34a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x34a0b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a0bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34a0c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x34a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a0c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a0cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34a0d0u;
}
