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

// Function: entry_0027d5bc
// Address: 0x27d5bc - 0x27d694
void entry_0027d5bc_0x27d5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d5bc_0x27d5bc");
#endif

    switch (ctx->pc) {
        case 0x27d650u: goto label_27d650;
        case 0x27d680u: goto label_27d680;
        default: break;
    }

    ctx->pc = 0x27d5bcu;

    // 0x27d5bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27d5c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27d5c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d5d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d5d4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27d5d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27d5e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27d5e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d5ec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27d5f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27d5f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27d5f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27d5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27d600: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d604: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d608: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x27d608u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x27d60c: 0x0  nop
    ctx->pc = 0x27d60cu;
    // NOP
    // 0x27d610: 0x0  nop
    ctx->pc = 0x27d610u;
    // NOP
    // 0x27d614: 0x1010  mfhi        $v0
    ctx->pc = 0x27d614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27d618: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x27d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x27d61c: 0x34530400  ori         $s3, $v0, 0x400
    ctx->pc = 0x27d61cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x27d620: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x27d620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x27d624: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x27d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d628: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27d628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27d62c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d630: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d634: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27d634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d638: 0x3c02456a  lui         $v0, 0x456A
    ctx->pc = 0x27d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17770 << 16));
    // 0x27d63c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x27d640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d644: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27d644u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d648: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x27D648u;
    SET_GPR_U32(ctx, 31, 0x27D650u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x27D648u, 0x27D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D650u;
label_27d650:
    // 0x27d650: 0x3c02456a  lui         $v0, 0x456A
    ctx->pc = 0x27d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17770 << 16));
    // 0x27d654: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x27d658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d65c: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x27d65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x27d660: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x27d664: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27d664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27d668: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d66c: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d670: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27d674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d678: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x27D678u;
    SET_GPR_U32(ctx, 31, 0x27D680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x27D678u, 0x27D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D680u;
label_27d680:
    // 0x27d680: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27d684: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d688: 0xac231b38  sw          $v1, 0x1B38($at)
    ctx->pc = 0x27d688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B38u, _value); } while (0);
    // 0x27d68c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D68Cu;
    {
        const bool branch_taken_0x27d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d68c) {
            ctx->pc = 0x27D6A8u;
            return;
        }
    }
    ctx->pc = 0x27D694u;
}
