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

// Function: entry_00246788
// Address: 0x246788 - 0x24684c
void entry_00246788_0x246788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246788_0x246788");
#endif

    switch (ctx->pc) {
        case 0x2467d0u: goto label_2467d0;
        case 0x24680cu: goto label_24680c;
        case 0x246814u: goto label_246814;
        default: break;
    }

    ctx->pc = 0x246788u;

    // 0x246788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24678c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x24678cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x246790: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x246790u;
    {
        const bool branch_taken_0x246790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246790) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x246798u;
    // 0x246798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24679c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2467a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2467a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2467a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2467a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467ac: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2467acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2467b0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467b4: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2467b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2467b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2467bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2467c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2467c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2467c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2467C8u;
    SET_GPR_U32(ctx, 31, 0x2467D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2467C8u, 0x2467D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467D0u;
label_2467d0:
    // 0x2467d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2467d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2467d4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2467d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2467d8: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2467dc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2467dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2467e0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2467e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2467e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467e8: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x2467e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x2467ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2467f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2467f8: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2467fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246800: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246804: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246804u;
    SET_GPR_U32(ctx, 31, 0x24680Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246804u, 0x24680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24680Cu;
label_24680c:
    // 0x24680c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24680Cu;
    SET_GPR_U32(ctx, 31, 0x246814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24680Cu, 0x246814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246814u;
label_246814:
    // 0x246814: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x246814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246818: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x246818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x24681c: 0x24a30064  addiu       $v1, $a1, 0x64
    ctx->pc = 0x24681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x246820: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x246824: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246824u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x246828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24682c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246830: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x246834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246838: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24683c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x24683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x246840: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x246844: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x246844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x246848: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x246848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    ctx->pc = 0x24684cu;
}
