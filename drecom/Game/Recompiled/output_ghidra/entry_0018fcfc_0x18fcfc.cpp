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

// Function: entry_0018fcfc
// Address: 0x18fcfc - 0x18fedc
void entry_0018fcfc_0x18fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fcfc_0x18fcfc");
#endif

    switch (ctx->pc) {
        case 0x18fed4u: goto label_18fed4;
        default: break;
    }

    ctx->pc = 0x18fcfcu;

    // 0x18fcfc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x18fd00: 0x34630015  ori         $v1, $v1, 0x15
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21);
    // 0x18fd04: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd08: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd0c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd10: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x18fd10u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd14: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd14u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd18: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd1c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x18fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x18fd20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18fd24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fd30: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x18fd30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd34: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x18fd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18fd38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18fd3c: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x18fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x18fd40: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x18fd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x18fd44: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd48: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd4c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd50: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x18fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fd54: 0xdc8301d0  ld          $v1, 0x1D0($a0)
    ctx->pc = 0x18fd54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x18fd58: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd5c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd60: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd64: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18fd68: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd6c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd7c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x18fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x18fd80: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x18fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x18fd84: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fd88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd8c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd90: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd94: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fd98: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd9c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fda0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fda4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18fda8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fda8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdac: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fdb0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fdb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18fdb8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x18fdb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdbc: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18fdc0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x18fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x18fdc4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fdc8: 0xdc4301e8  ld          $v1, 0x1E8($v0)
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x18fdcc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fdccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdd0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fdd4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fdd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18fddc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fddcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fde0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fde4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x18fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x18fde8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fdec: 0xdc4201e0  ld          $v0, 0x1E0($v0)
    ctx->pc = 0x18fdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x18fdf0: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x18fdf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdf4: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18fdf8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18fdfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18fe00: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe00u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe04: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe08: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe0c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe10: 0xdc4301d8  ld          $v1, 0x1D8($v0)
    ctx->pc = 0x18fe10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x18fe14: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe14u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe18: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe1c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe20: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18fe24: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe24u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe28: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe2c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe30: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe34: 0xdc4301f0  ld          $v1, 0x1F0($v0)
    ctx->pc = 0x18fe34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x18fe38: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe3c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe40: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe44: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fe48: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe48u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe4c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe50: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe54: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x18fe58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18fe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18fe5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fe60: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x18fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x18fe64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fe64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fe68: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe6c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe74: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x18fe78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fe7c: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x18fe80: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x18fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x18fe84: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fe88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe8c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe90: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe94: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe98: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fe98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fe9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18fe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fea0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fea4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18FEA4u;
    {
        const bool branch_taken_0x18fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fea4) {
            ctx->pc = 0x18FEDCu;
            return;
        }
    }
    ctx->pc = 0x18FEACu;
    // 0x18feac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18feb0: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x18feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18feb4: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x18feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18feb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18feb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18febc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18febcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18fec0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fec4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fec8: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x18fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fecc: 0xc040c60  jal         func_103180
    ctx->pc = 0x18FECCu;
    SET_GPR_U32(ctx, 31, 0x18FED4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x18FED4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18FED4u) { return; }
    ctx->pc = 0x18FED4u;
label_18fed4:
    // 0x18fed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FED4u;
    {
        const bool branch_taken_0x18fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fed4) {
            ctx->pc = 0x18FEE8u;
            return;
        }
    }
    ctx->pc = 0x18FEDCu;
}
