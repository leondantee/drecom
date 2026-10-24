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

// Function: entry_0023310c
// Address: 0x23310c - 0x2331bc
void entry_0023310c_0x23310c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023310c_0x23310c");
#endif

    switch (ctx->pc) {
        case 0x233134u: goto label_233134;
        case 0x233150u: goto label_233150;
        case 0x233170u: goto label_233170;
        case 0x23317cu: goto label_23317c;
        case 0x2331a8u: goto label_2331a8;
        default: break;
    }

    ctx->pc = 0x23310cu;

    // 0x23310c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233110: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x233114: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x233114u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233118: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x233118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23311c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x23311cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x233120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233124: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233128: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23312c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x23312Cu;
    SET_GPR_U32(ctx, 31, 0x233134u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x23312Cu, 0x233134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233134u;
label_233134:
    // 0x233134: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233134u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x233138: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23313c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x233140: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x233144: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x233148: 0xc040c80  jal         func_103200
    ctx->pc = 0x233148u;
    SET_GPR_U32(ctx, 31, 0x233150u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x233150u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233150u) { return; }
    ctx->pc = 0x233150u;
label_233150:
    // 0x233150: 0x260612a0  addiu       $a2, $s0, 0x12A0
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x233154: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x233154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x233158: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23315c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x23315cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x233160: 0x260812a0  addiu       $t0, $s0, 0x12A0
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x233164: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x233164u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x233168: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x233168u;
    SET_GPR_U32(ctx, 31, 0x233170u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x233170u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233170u) { return; }
    ctx->pc = 0x233170u;
label_233170:
    // 0x233170: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233174: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x233174u;
    SET_GPR_U32(ctx, 31, 0x23317Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x233174u, 0x23317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23317Cu;
label_23317c:
    // 0x23317c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233180: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x233180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x233184: 0x106001f7  beqz        $v1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x233184u;
    {
        const bool branch_taken_0x233184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233184) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x23318Cu;
    // 0x23318c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233190: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x233194: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x233198: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x23319c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2331a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2331A0u;
    SET_GPR_U32(ctx, 31, 0x2331A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2331A0u, 0x2331A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331A8u;
label_2331a8:
    // 0x2331a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2331ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2331acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2331b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2331b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2331b4: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x2331B4u;
    {
        const bool branch_taken_0x2331b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331b4) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x2331BCu;
}
