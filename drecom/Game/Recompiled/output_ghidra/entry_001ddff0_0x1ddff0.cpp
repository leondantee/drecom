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

// Function: entry_001ddff0
// Address: 0x1ddff0 - 0x1de1a4
void entry_001ddff0_0x1ddff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddff0_0x1ddff0");
#endif

    switch (ctx->pc) {
        case 0x1de0c8u: goto label_1de0c8;
        default: break;
    }

    ctx->pc = 0x1ddff0u;

    // 0x1ddff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ddff4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ddff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ddff8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ddffc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de000: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1de000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1de004: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1de008: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1de008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1de00c: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1de00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de010: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de010u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de014: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de018: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1de018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1de01c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de020: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de024: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de028: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de02c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1de030: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de030u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de034: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de038: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1de038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1de03c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de03cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de040: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de044: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de048: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de04c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de050: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de054: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de058: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de05c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1de060: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1de060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de064: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de064u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de068: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de06c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1de070: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1de070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de074: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1de074u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1de078: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de07c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de07cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de080: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de088: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de08c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1de090: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1de090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1de094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1de094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1de098: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1de098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de09c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1de09cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de0a0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1de0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0a4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x1de0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1de0a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de0ac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1de0acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1de0b0: 0x8fb700d8  lw          $s7, 0xD8($sp)
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0b4: 0x8fb600d8  lw          $s6, 0xD8($sp)
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0b8: 0x26e40070  addiu       $a0, $s7, 0x70
    ctx->pc = 0x1de0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x1de0bc: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x1de0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x1de0c0: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1DE0C0u;
    SET_GPR_U32(ctx, 31, 0x1DE0C8u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1DE0C0u, 0x1DE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0C8u;
label_1de0c8:
    // 0x1de0c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1de0c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de0cc: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de0d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de0d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de0d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de0d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de0dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de0e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de0e4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de0e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de0ec: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de0f0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de0f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de0f4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0f8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de0fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de100: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de104: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de104u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de108: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de10c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de110: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de114: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de118: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de120: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de124: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de124u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de128: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de12c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de130: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de134: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de134u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de138: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de13c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de13cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de140: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de148: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de14c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de150: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de158: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de15c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de15cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de160: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de164: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de168: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de16c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de16cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de170: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de174: 0x2466bd10  addiu       $a2, $v1, -0x42F0
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1de178: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1de178u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1de17c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de180: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1de180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de184: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1de184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1de188: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1de188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1de18c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1de18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de190: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x1de190u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1de194: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1de198: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1de19c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1de1a0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1de1a0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1de1a4u;
}
